#!/usr/bin/python
# Author: mich4th3c0wb0y
# (c) R00TW0RM - Private Community
# https://r00tw0rm.com/
# Greets: To all members of r00tw0rm !! 
# Example: python hidemyass.py -f proxy.txt -n 17 -t http://google.com 

import socket
socket.setdefaulttimeout(4)
import urllib2
import cookielib
import httplib
import string
import argparse
import random
import re
import sys
from threading import Thread

g_count = 0             # global counter for found Proxy


class Proxy:
    def __init__(self):
        self.userAgentList = [ 
        ('User-Agent','Mozilla/5.0 (X11; Linux x86_64; rv:10.0.2) Gecko/20100101 Firefox/10.0.2'),
        ('User-Agent','Mozilla/5.0 (Windows; U; Windows NT 5.1; de; rv:1.9.0.10) Gecko/2009042316 Firefox/3.0.10'),
        ('User-Agent','Mozilla/5.0 (Macintosh; U; PPC Mac OS X; en) AppleWebKit/125.2 (KHTML, like Gecko) Safari/125.8'),
        ('User-Agent','Opera/9.80 (Macintosh; Intel Mac OS X; U; en) Presto/2.2.15 Version/10.00') 
        ]
        self.goodProxyList = []
        self.proxyIndex = 0           # getNextProxy() ...

    def changeProxy(self, proxy):     # proxy format =  {'http':'http://...'}
        cj = cookielib.LWPCookieJar()
        opener = urllib2.build_opener(urllib2.ProxyHandler(proxy), urllib2.HTTPCookieProcessor(cj))
        # random userAgent
        opener.addheaders = [ self.userAgentList[ random.randint(0,len(self.userAgentList)-1) ]] 
        urllib2.install_opener(opener)
    
    def getProxy(self, index): 
        if(len(self.goodProxyList) > index):
            tmp = self.pythonProxyList( [self.goodProxyList[index]] )
            return tmp[0]
        else:
            print '[!] getProxy(%d) fail'%(index)

    def getRandomProxy(self):
        index = random.randint( 0, len(self.goodProxyList)-1 )
        return self.pythonProxyList( [self.goodProxyList[index]] )[0]

    def getNextProxy(self):
        self.proxyIndex = (self.proxyIndex+1) % len(self.goodProxyList)          
        return self.getProxy(self.proxyIndex)


    def getProxyCount(self):
        return len(self.goodProxyList)


    def threadWorker(self, proxy, testUrl):
        try:
            cj = cookielib.LWPCookieJar()
            opener = urllib2.build_opener(urllib2.ProxyHandler({'http':'http://%s'%(proxy)}), urllib2.HTTPCookieProcessor(cj))
            opener.addheaders = [ self.userAgentList[ random.randint(0,len(self.userAgentList)-1) ]] 
            res = opener.open(testUrl)
            print 'ok: %s => %d'%(proxy, g_count+1)
            self.goodProxyList.append(proxy)
        except Exception as e:
            print 'fail: %s'%(proxy)
    
    def getNewProxyList(self, pageCount, testUrl, multiThreading=False):
        count = 0
        finish = False
        page = 1
        threadList = []
        while(not(finish)):
            proxyList = self.hideMyAssGrabber(page)
            if multiThreading:
                for proxy in proxyList:
                    threadList.append(Thread(None, self.threadWorker, None, (proxy, testUrl) ) )
                    threadList[-1].start() 
                for thread in threadList:
                    thread.join()
                threadList = []
            else:
                for proxy in proxyList:
                    finish = self.threadWorker(proxy, testUrl)
            if page >= pageCount:
                print '[+] Finish'
                break
            page += 1
        return self.goodProxyList

    def hideMyAssGrabber(self, page):

        #TODO: </span>225.107<span style="..> does not work but it is not often used by hidemyass 
        #TODO: clean this mess up ... 
        self.changeProxy({'':''})  # without facke User-Agend hidemyass block you after the first page 
        print '### http://hidemyass.com/proxy-list/%d ###'%(page)
        res = urllib2.urlopen('http://hidemyass.com/proxy-list/%d'%(page)).read()
        prePattern = r'(.*<td><span>)(.*)(</span></td>.*)'
        #divPattern = r'<div.*</###>'   # always hidden cause div = newline :P 
        spanOnlyPattern = r'(.*<span>)(.*\d+.*)(</###>.*)' # always visable
        spanClassPattern = r'(.*<span.*class=".*".*>)(.*\d+.*)(</###>.*)' # think always visable
        #spanStyleHiddenPattern = r'.*<span.*style="display:none".*>.*</###>.*' # always hidden
        spanStyleVisablePattern = r'(.*<span.*style="display:.*inline".*>)(.*\d+.*)(</###>.*)'# always visable
        spanNumberLeftPattern = r'\D*(\d+)\D*(<span.*)'
        divNumberLeftPattern = r'\D*(\d+)\D*(<div.*)'
        numberOnlyPattern = r'\D*(\d+)$'


        tmpList1 = res.split('\n')
        tmpList2 = []
        switch = False 
        c = 0

        for line in tmpList1:
            tmp = re.match(prePattern, line)
            if(tmp):
                switch = True
                tmpList2.append(tmp.group(2))
            if(switch):
                c += 1
                if(c == 3):
                    tmpList2.append(line)
                    switch = False        
                    c = 0
        tmpList1 = []
        for i in tmpList2:
            tmpList1.append(re.sub(r'(</div>)|(</span>)', '</###>\n',  i))

        ###     Debug Output    ###
        #print 'IP: ',tmpList1[4]
        #print 'Port: ',tmpList1[1]
        ###########################

        switch = False
        contentList = []
        proxyList = []

        for i in tmpList1:
            if(not(switch)): # IP
                switch = True
                i = i.split('\n')
                contentList = [] 
                for j in i:
                    #tmp = re.search(divPattern, j)
                    #if(tmp):
                    #    pass
                    #tmp = re.match(spanStyleHiddenPattern, j)
                    #if(tmp):
                    #    pass
                    tmp = re.match(spanOnlyPattern, j)
                    if(tmp):
                        contentList.append(tmp.group(2))
                    tmp = re.match(spanStyleVisablePattern, j)
                    if(tmp):
                        contentList.append(tmp.group(2))
                    tmp = re.match(spanClassPattern, j)
                    if(tmp):
                        contentList.append(tmp.group(2))
                    tmp = re.match(spanNumberLeftPattern, j)
                    if(tmp):
                        contentList.append(tmp.group(1))
                    tmp = re.match(numberOnlyPattern, j)
                    if(tmp):
                        contentList.append(tmp.group(1))
                    tmp = re.match(divNumberLeftPattern, j)
                    if(tmp):
                        contentList.append(tmp.group(1))

                #print contentList
            else: # Port
                switch = False
                if(len(contentList) == 4):
                    [a,b,c,d] = contentList
                    proxyList.append('%s.%s.%s.%s:%s'%(a, b, c, d, i.rstrip('</td>\n')) )
                else:
                    #print contentList
                    pass
        return proxyList




    def writeProxyList(self, fileName):
        fd = open(fileName, 'w')
        if(len(self.goodProxyList) == 0):
            self.getNewProxyList()
        for proxy in self.goodProxyList:
            fd.write('%s\n'%(proxy))
            #print '%s'%proxy
        fd.close()


    def readProxyList(self, fileName):
        fd = open(fileName, 'r')
        for proxy in fd:
            proxy = proxy.rstrip(' \n')
            self.goodProxyList.append(proxy) 
        fd.close()
        return self.goodProxyList


    def pythonProxyList(self, proxyList):
        ret = []
        for proxy in proxyList:
            ret.append({'http':'http://%s'%(proxy)})
        return ret






def main():
    banner = '''
 _     _     _                                    
| |__ (_) __| | ___ _ __ ___  _   _  __ _ ___ ___ 
| '_ \| |/ _` |/ _ \ '_ ` _ \| | | |/ _` / __/ __|
| | | | | (_| |  __/ | | | | | |_| | (_| \__ \__ \\
|_| |_|_|\__,_|\___|_| |_| |_|\__, |\__,_|___/___/  Proxy Grabber
                              |___/               


 Author: mich4th3c0wb0y
 (c) R00TW0RM - Private Community
 https://r00tw0rm.com/
 Greets: To all members of r00tw0rm !!\n\n'''

    parser = argparse.ArgumentParser(description='Hidemyass Proxy Grabber',
        epilog='\n%s\n\nGrabbe 17 Proxies from hidemyass.com and save them to proxy.txt\n'\
        'make sure that all saved Proxies works with google.com\n\n'\
        'Example: python %s -f proxy.txt -n 17 -t http://google.com\n\n%s\n'%( '-'*80, sys.argv[0], '-'*80),
        formatter_class=argparse.RawTextHelpFormatter)
    parser.add_argument('-f', action='store', dest='fileName', help='Filename to store new Proxies' )
    parser.add_argument('-n', action='store', type=int, dest='numberOfPages', 
        help='Number of Pages you want to grabbe' )
    parser.add_argument('-t', action='store', dest='testPage', help='URL to test for. Like http://google.com' )
    parser.add_argument('--multithreading', action='store_true', dest='threads', 
        help='Use for every test a single thread')

    #args = parser.parse_args(['-f', 'proxy.txt', '-n', '2', '-t', 'twitter.com', '--multithreading' ])

    args = parser.parse_args(sys.argv[1:])
    print banner

    if(args.fileName and args.numberOfPages and args.testPage):
        if(not(re.match(r'^http://.*',args.testPage))):
            args.testPage = 'http://%s'%(args.testPage)
        proxy = Proxy()
        proxy.getNewProxyList(args.numberOfPages, args.testPage, multiThreading=args.threads)
        proxy.writeProxyList(args.fileName)
    else:
        parser.print_help()
        sys.exit(0)


    print '\n'
    
if __name__ == '__main__':
    main()