#include<iostream>
#include<cstdlib>
#include<string.h>
#include<fstream>
using namespace std;
char pass[25];
char corrpass[25]="printresult";
char corrpass1[25]="faado";
char cha='y';
char output[50];
int getcount();
char sqli[100]=" python2.7 Domain-SQLi-finder.py --url ";
int main()
	
{
	char c;
	char hash1[30];
	char hash2[100]="python hash.pyc";
	char hashtype[10];
	char crawler[100]="python buster.pyc http://www.";
	int hashchoice,choice;
	char web[50];
	int count=0;
	int start,end;
	char revip1[100]="perl revip.pl -s ";
	char revip2[20]=" -o result.txt";
	char revfinal[100];
	//char sqli[100]=" python2.7 Domain-SQLi-finder.py --url ";
	char output[20];
	ifstream fin;
	void viewrevip();
	void limited(int m,int n);
	void sqlif();
	cout<<"\n enter pass :";
	cin>>pass;
	if(strcmp(corrpass,pass)==0 || strcmp(corrpass1,pass)==0)
	{
	system("cd /opt/icp");
	cout<<"\n\n loading.... ";
	sleep(3);
	
	/*======================================================================================*/
	cout<<"\n\n=================================================================================\n\n";
	cout<<"CODED BY INTRUD3R ICP.. TEAM ICP (Indian Cyber POlice).. JAI HIND";
	cout<<"\n\n=================================================================================\n\n";
	/*======================================================================================*/
	top:
	system("clear");
	system("rm /opt/icp/result.txt");
	system("pwd");
	system("clear");
	cout<<"\n Enter your choice";
	cout<<"\n	1)decrypt your encrypted  key";
	cout<<"\n	2)reverse ip"; 	
	cout<<"\n	3)Admin Page Scanner"; 
	cout<<"\n	4)Sensitive Directory Scanner";
	cout<<"\n	5)Sensitive file Scanner";
	cout<<"\n	6)Shell Scanner";
	cout<<"\n	7)Backup files Scanner";
	cout<<"\n	8)crawl every website on server";
	cout<<"\n	9)LFI scanner";
	cout<<"\n	10)Grab HideMyAss proxy(courtesy r00tw0rm)   ";
	cout<<"\n	11)Resove CloudFlare IP (courtesy r00tw0rm)";  
	cout<<"\n	12)Bing00... Bing and Google d0rk scanner";
	cout<<"\n	13)scan a website or websites on server for sql inection ";
	cout<<"\n	99)Clear all logs";
	cout<<"\n\n\n		:- ";
	
	int choice;
	cin>>choice;
	/*=======================================================================================*/
		switch(choice)
		{
			case 1:
				cout<<endl<<endl<<endl;
				
				cout<<"\n Enter your choice... "<<endl<<endl<<endl;
		  		cout<<"\n		1)MD4       - RFC 1320 ";
		  		cout<<"\n		2)MD5       - RFC 1321 ";
		  		cout<<"\n		3)SHA1      - RFC 3174 (FIPS 180-3) ";
		  		cout<<"\n		4)SHA224    - RFC 3874 (FIPS 180-3) ";
		  		cout<<"\n		5)SHA256    - FIPS 180-3 ";
		  		cout<<"\n		6)SHA384    - FIPS 180-3 ";
		  		cout<<"\n		7)SHA512    - FIPS 180-3 ";
		  		cout<<"\n		8)RMD160    - RFC 2857 ";
		  		cout<<"\n		9)GOST      - RFC 5831 ";
		  		cout<<"\n		10)WHIRLPOOL - ISO/IEC 10118-3:2004 ";
		  		cout<<"\n		11)LM        - Microsoft Windows hash ";
		  		cout<<"\n		12)NTLM      - Microsoft Windows hash ";
		  		cout<<"\n		13)MYSQL     - MySQL 3, 4, 5 hash ";
		  		cout<<"\n		14)CISCO7    - Cisco IOS type 7 encrypted passwords ";
		  		cout<<"\n		15)JUNIPER   - Juniper Networks $9$ encrypted passwords ";
		  		cout<<"\n		16)LDAP_MD5  - MD5 Base64 encoded ";
		  		cout<<"\n		17)LDAP_SHA1 - SHA1 Base64 encoded ";
		  		cout<<"\n";
		  		cout<<"\n		99)Jump to main menu ";
		 		cout<<endl<<"    :-";
		 		cin>>hashchoice;
				switch(hashchoice)
				{
					case 1:
						cout<<"\n enter the hash :-";
						cin>>hash1;
						cout<<endl<<endl<<endl;
						strcat(hash2," MD4 -h ");
						strcat(hash2,hash1);
						strcat(hash2," -g ");
						system(hash2);
						
						break;		
					
					case 2:
						cout<<"\n enter the hash :-";
						cin>>hash1;
						cout<<endl<<endl<<endl;
						strcat(hash2," MD5 -h ");
						strcat(hash2,hash1);
						strcat(hash2," -g ");
						system(hash2);
						break;
					
					case 3:		
						cout<<"\n enter the hash :-";
						cin>>hash1;
						cout<<endl<<endl<<endl;
						strcat(hash2," SHA1 -h ");
						strcat(hash2,hash1);
						strcat(hash2," -g ");
						system(hash2);
							break;
				
					case 4:
						
						
						cout<<"\n enter the hash :-";
						cin>>hash1;
						cout<<endl<<endl<<endl;
						strcat(hash2," SHA224 -h ");
						strcat(hash2,hash1);
						strcat(hash2," -g ");
						system(hash2);
						break;
						
			
					case 5:
						cout<<"\n enter the hash :-";
						cin>>hash1;
						cout<<endl<<endl<<endl;
						strcat(hash2," SHA256 -h ");
						strcat(hash2,hash1);
						strcat(hash2," -g ");
						system(hash2);
							break;
				
					case 6:
						cout<<"\n enter the hash :-";
						cin>>hash1;
						cout<<endl<<endl<<endl;
						strcat(hash2," SHA384 -h ");
						strcat(hash2,hash1);
						strcat(hash2," -g ");
						system(hash2);
							break;
					case 7:
						cout<<"\n enter the hash :-";
						cin>>hash1;
						cout<<endl<<endl<<endl;
						strcat(hash2," SHA512 -h ");
						strcat(hash2,hash1);
						strcat(hash2," -g ");
						system(hash2);
							break;
					case 8:
						cout<<"\n enter the hash :-";
						cin>>hash1;
						cout<<endl<<endl<<endl;
						strcat(hash2," RMD160 -h ");
						strcat(hash2,hash1);
						strcat(hash2," -g ");
						system(hash2);
							break;
					case 9:
						cout<<"\n enter the hash :-";
						cin>>hash1;
						cout<<endl<<endl<<endl;
						strcat(hash2," GOST -h ");
						strcat(hash2,hash1);
						strcat(hash2," -g ");
						system(hash2);
							break;
					case 10:
						cout<<"\n enter the hash :-";
						cin>>hash1;
						cout<<endl<<endl<<endl;
						strcat(hash2," WHIRLPOOL -h ");
						strcat(hash2,hash1);
						strcat(hash2," -g ");
						system(hash2);
							break;
					case 11:
						cout<<"\n enter the hash :-";
						cin>>hash1;
						cout<<endl<<endl<<endl;
						strcat(hash2," LM -h ");
						strcat(hash2,hash1);
						strcat(hash2," -g ");
						system(hash2);
							break;
					case 12:
						cout<<"\n enter the hash :-";
						cin>>hash1;
						cout<<endl<<endl<<endl;
						strcat(hash2," NTLM -h ");
						strcat(hash2,hash1);
						strcat(hash2," -g ");
						system(hash2);
							break;
					
					case 13:
						cout<<"\n enter the hash :-";
						cin>>hash1;
						cout<<endl<<endl<<endl;
						strcat(hash2," MYSQL-h ");
						strcat(hash2,hash1);
						strcat(hash2," -g ");
						system(hash2);
							break;
					case 14:
						cout<<"\n enter the hash :-";
						cin>>hash1;
						cout<<endl<<endl<<endl;
						strcat(hash2," CISCO7 -h ");
						strcat(hash2,hash1);
						strcat(hash2," -g ");
						system(hash2);
							break;
					case 15:
						cout<<"\n enter the hash :-";
						cin>>hash1;
						cout<<endl<<endl<<endl;
						strcat(hash2," JUNIPER -h ");
						strcat(hash2,hash1);
						strcat(hash2," -g ");
						system(hash2);
							break;
					case 16:
						cout<<"\n enter the hash :-";
						cin>>hash1;
						cout<<endl<<endl<<endl;
						strcat(hash2," LDAP_MD5 -h ");
						strcat(hash2,hash1);
						strcat(hash2," -g ");
						system(hash2);
							break;
					case 17:
						cout<<"\n enter the hash :-";
						cin>>hash1;
						cout<<endl<<endl<<endl;
						strcat(hash2," LDAP_SHA1 -h ");
						strcat(hash2,hash1);
						strcat(hash2," -g ");
						system(hash2);
							break;
					case 99:
						system("clear");
						goto top;
				}
						
						
				cout<<"\n press c to continue to main menu  :-";
				cin>>c;
				if(c=='c')		
					goto top;
				else 
					exit(0);
				
				
		
				
			case 2:
				cout<<endl<<endl<<endl;
				system("clear");
				cout<<"\n.....initiating reverse ip check.....";
				sleep(3);
				cout<<"\nenter website  : ";
				
				cin>>web;
				
				strcat(revip1,web);
				strcat(revip1,revip2);
				system(revip1);
				cout<<endl<<endl<<endl;
				system("cp result.txt ~/Desktop/india/");
				system("rm -rf result.txt");
				cout<<"\npress c to continue to main menu  ";
				cin>>c;
				if(c=='c')
					goto top;
				else
					break;
			case 3:
				
				system("rm /opt/icp/result.txt");
				system("clear");
				cout<<endl<<endl<<endl;
				system("cp ~/Desktop/india/result.txt /opt/icp/");
				system("clear");
				system("clear");
				admin:
				cout<<endl<<endl<<endl<<endl<<endl;
				cout<<"\n	what would you like to do ";
				cout<<"\n\n		1)scan every website on server for admin page ";
				cout<<"\n		 (this may take some time depending upon number of websites on server and your net connection speed)";
				cout<<"\n\n		2)scan selected number of websites";
				cout<<"\n                 (from site number this to site number that)";
				cout<<"\n\n		3)scan a single website for admin page";
				cout<<"\n\n		4)add websites for admin check ";
				cout<<"\n\n		5)edit admin page list..";
				cout<<"\n\n		6)restore default list....";
				cout<<"\n\n             7)view current admin list ";
				cout<<"\n\n\n\n	       99)go to main menu";
				cout<<"\n\n		:- ";
				
				cin>>choice;
				
				switch(choice)
				{
					case 1:
						limited(3,1);
						break;
					case 2:
						cout<<"\n Do u want to see reverse IP file to decide site number(Y/N)  :-";
						cin>>c;
						if(c=='Y' || c=='y')
						{
							viewrevip();
							cout<<"\n press c to continue ";
							cin>>c;
							if(c=='c'|| c=='C')
								goto dir;
						}
						limited(3,2);
						break;
						
					case 3:
						cout<<"\n enter website (eg:- pentest.com)  :-";
						cin>>web;
						
						strcat(crawler,web);
						strcat(crawler," -m admin");
						system(crawler);
						system("mv http:* ~/Desktop/india");
						break;
					case 4:
						system("clear");
						cout<<"\n Enter Websites in format site.com ";
						cout<<"\n do not use another format ";
						cout<<"press c to continue .... ";
						char h;
						cin>>h;
						if(h=='c' || h=='C')
						{
							system("cp result.txt ~/Desktop/india/");
							fin.open("result.txt",ios::in);
							if(fin.is_open())
							{
								system("gedit ~/Desktop/india/result.txt");
								system("cp ~/Desktop/india/result.txt /opt/icp");
							}
							else	
							{	
								cout<<"\n no reverse ip file found ";
								
								break;
							}
						}
						goto admin;
						
					case 5:
						system("gedit admins.1337");
						goto admin;
					case 6:
						system("rm admins.1337");
						system("cp admins.1337.backup admins.1337");
						sleep(3);
						system("clear");
						cout<<"\noriginal admin list restored...\n\n\n\n\n";
						sleep(3);
						
						goto admin;
					case 7:
						cout<<"\n\n press q to quit viewing\n\n";
						sleep(3);
						system("cat admins.1337 |less");
						
						goto admin;
					case 99:
						goto top;
				}
				cout<<"\n press c to continue  ";
				cin>>c;
				if(c=='c')
					goto top;
				else
					break;
				
			case 4:
				dir:
				system("rm /opt/icp/result.txt");
				system("clear");
				cout<<endl<<endl<<endl;
				system("cp ~/Desktop/india/result.txt /opt/icp/");
				system("clear");
				system("clear");
				cout<<endl<<endl<<endl<<endl<<endl;
				cout<<"\n	what would you like to do ";
				cout<<"\n\n		1)scan every website on server for sensitive directories (this may take some time depending upon number of websites on server and your net connection speed)";
				cout<<"\n\n		2)scan selected number of websites for sensitive directories  (from site number this to site number that)";
				cout<<"\n\n		3)scan a single website for sensitive directories";
				cout<<"\n\n		4)edit reverse ip file ";
				cout<<"\n\n		5)edit directory page list..";
				cout<<"\n\n		6)restore default list....";
				cout<<"\n\n             7)view current directory list ";

				cout<<"\n\n\n\n	       99)go to main menu";
				cout<<"\n\n		:- ";
				
				cin>>choice;
				
				switch(choice)
				{
					case 1:
						limited(4,1);
						break;
					case 2:
						cout<<"\n Do u want to see reverse IP file to decide site number(Y/N)  :-";
						cin>>c;
						if(c=='Y' || c=='y')
						{
							viewrevip();
							cout<<"\n press c to continue ";
							cin>>c;
							if(c=='c'|| c=='C')
								goto dir;
						}
						limited(4,2);
						break;
					case 3:
						cout<<"\n enter website (eg:- pentest.com)  :-";
						cin>>web;
						
						strcat(crawler,web);
						strcat(crawler," -m dir");
						system(crawler);
						system("mv http:* ~/Desktop/india");
						break;
					case 4:
						system("cp result.txt ~/Desktop/india/");
						fin.open("result.txt",ios::in);
						if(fin.is_open())
						{
						system("gedit ~/Desktop/india/result.txt");
						system("cp ~/Desktop/india/result.txt /opt/icp");
						}
						else
						{
							cout<<"\n no reverse ip file found ";
							
							break;
						}
						goto dir;
					case 5:
						system("gedit dir.1337");
						goto dir;
					case 6:
						system("rm dir.1337");
						system("cp dir.1337.backup dir.1337");
						sleep(3);
						system("clear");
						cout<<"\noriginal directory list restored...\n\n\n\n\n";
						sleep(3);
						
						goto admin;
					case 7:
						cout<<"\n\n press q to quit viewing\n\n";
						sleep(3);
						system("cat dir.1337 |less");
						
						goto admin;
						
					case 99:
						goto top;
				}
				cout<<"\n press c to continue  ";
				cin>>c;
				if(c=='c')
					goto top;
				else
					break;
				
			case 5:
				file:
				system("rm /opt/icp/result.txt");
				system("clear");
				cout<<endl<<endl<<endl;
				system("cp ~/Desktop/india/result.txt /opt/icp/");
				system("clear");
				system("clear");
				cout<<endl<<endl<<endl<<endl<<endl;
				cout<<"\n	what would you like to do ";
				cout<<"\n\n		1)scan every website on server for sensitive files";
				cout<<"\n		 (this may take some time depending upon number of websites on server and your net connection speed)";
				cout<<"\n\n		2)scan selected number of websites for sensitive files  (from site number this to site number that)";
				cout<<"\n\n		3)scan a single website for sensitive files";
				cout<<"\n\n		4)edit reverse ip file ";
				cout<<"\n\n		5)edit directory page list..";
				cout<<"\n\n		6)restore default list....";
				cout<<"\n\n             7)view current directory list ";

				cout<<"\n\n\n\n	       99)go to main menu";
				cout<<"\n\n		:- ";
				
				cin>>choice;
				
				switch(choice)
				{
					case 1:
						limited(5,1);
						break;
					case 2:
						cout<<"\n Do u want to see reverse IP file to decide site number(Y/N)  :-";
						cin>>c;
						if(c=='Y' || c=='y')
						{
							viewrevip();
							cout<<"\n press c to continue ";
							cin>>c;
							if(c=='c'|| c=='C')
								goto file;
						}
						limited(4,2);
						break;
					case 3:
						cout<<"\n enter website (eg:- pentest.com)  :-";
						cin>>web;
						
						strcat(crawler,web);
						strcat(crawler," -m files");
						system(crawler);
						system("mv http:* ~/Desktop/india");
						break;
					case 4:
						system("cp result.txt ~/Desktop/india/");
						fin.open("result.txt",ios::in);
						if(fin.is_open())
						{
						system("gedit ~/Desktop/india/result.txt");
						system("cp ~/Desktop/india/result.txt /opt/icp");
						}
						else
						{
							cout<<"\n no reverse ip file found ";
							
							break;
						}
						goto file;
						
					case 5:
						system("gedit filess.1337");
						goto file;
					case 6:
						system("rm files.1337");
						system("cp files.1337.backup files.1337");
						sleep(3);
						system("clear");
						cout<<"\noriginal sensitive files list restored...\n\n\n\n\n";
						sleep(3);
						
						goto admin;
					case 7:
						cout<<"\n\n press q to quit viewing\n\n";
						sleep(3);
						system("cat backups.1337 |less");
						
						goto admin;
					
						
						
					case 99:
						goto top;
				}
				cout<<"\n press c to continue  ";
				cin>>c;
				if(c=='c')
					goto top;
				else
					break;
				

			
			case 6:
				shell:
				system("rm /opt/icp/result.txt");
				system("clear");
				cout<<endl<<endl<<endl;
				system("cp ~/Desktop/india/result.txt /opt/icp/");
				system("clear");
				system("clear");
				cout<<endl<<endl<<endl<<endl<<endl;
				cout<<"\n	what would you like to do ";
				cout<<"\n\n		1)scan every website on server for shells";
				cout<<"\n		 (this may take some time depending upon number of websites on server and your net connection speed)";
				cout<<"\n\n		2)scan selected number of websites for shells  (from site number this to site number that)";
				cout<<"\n\n		3)scan a single website for shells";
				cout<<"\n\n		4)edit reverse ip file ";
				cout<<"\n\n\n\n	       99)go to main menu";
				cout<<"\n\n		:- ";
				
				cin>>choice;
				
				switch(choice)
				{
					case 1:
						limited(6,1);
						break;
					case 2:
						cout<<"\n Do u want to see reverse IP file to decide site number(Y/N)  :-";
						cin>>c;
						if(c=='Y' || c=='y')
						{
							viewrevip();
							cout<<"\n press c to continue ";
							cin>>c;
							if(c=='c'|| c=='C')
								goto file;
						}
						limited(6,2);
						break;
					case 3:
						cout<<"\n enter website (eg:- pentest.com)  :-";
						cin>>web;
						
						strcat(crawler,web);
						strcat(crawler," -m shell");
						system(crawler);
						system("mv http:* ~/Desktop/india/");
						break;
					case 4:
						system("cp result.txt ~/Desktop/india/");
						fin.open("result.txt",ios::in);
						if(fin.is_open())
						{
						system("gedit ~/Desktop/india/result.txt");
						system("cp ~/Desktop/india/result.txt /opt/icp");
						}
						else
						{
							cout<<"\n no reverse ip file found ";
							
							break;
						}
						goto shell;
						
					case 99:
						goto top;
				}
				cout<<"\n press c to continue  ";
				cin>>c;
				if(c=='c')
					goto top;
				else
					break;
				

				
		
			case 7:
				backup:
				system("rm /opt/icp/result.txt");
				system("clear");
				cout<<endl<<endl<<endl;
				system("cp ~/Desktop/india/result.txt /opt/icp/");
				system("clear");
				system("clear");
				cout<<endl<<endl<<endl<<endl<<endl;
				cout<<"\n	what would you like to do ";
				cout<<"\n\n		1)scan every website on server for backup files";
				cout<<"\n		 (this may take some time depending upon number of websites on server and your net connection speed)";
				cout<<"\n\n		2)scan selected number of websites for backup files (from site number this to site number that)";
				cout<<"\n\n		3)scan a single website for backup files";
				cout<<"\n\n		4)edit reverse ip file ";
				cout<<"\n\n\n\n	       99)go to main menu";
				cout<<"\n\n		:- ";
				
				cin>>choice;
				
				switch(choice)
				{
					case 1:
						limited(7,1);
						break;
					case 2:
						cout<<"\n Do u want to see reverse IP file to decide site number(Y/N)  :-";
						cin>>c;
						if(c=='Y' || c=='y')
						{
							viewrevip();
							cout<<"\n press c to continue ";
							cin>>c;
							if(c=='c'|| c=='C')
								goto file;
						}
						limited(7,2);
						break;
					case 3:
						cout<<"\n enter website (eg:- pentest.com)  :-";
						cin>>web;
						
						strcat(crawler,web);
						strcat(crawler," -m backup");
						system(crawler);
						system("mv http:* ~/Desktop/india");
						break;
					case 4:
						system("cp result.txt ~/Desktop/india/");
						fin.open("result.txt",ios::in);
						if(fin.is_open())
						{
						system("gedit ~/Desktop/india/result.txt");
						system("cp ~/Desktop/india/result.txt /opt/icp");
						}
						else
						{
							cout<<"\n no reverse ip file found ";
							
							break;
						}
						goto shell;
						
					case 99:
						goto top;
				}
				cout<<"\n press c to continue  ";
				cin>>c;
				if(c=='c')
					goto backup;
				else
					break;
				

				
			case 8:
				cout<<endl<<endl<<endl;
				system("cp ~/Desktop/india/result.txt /opt/icp/");
				system("clear");
			
				fin.open("result.txt",ios::in);
				if(!fin)
					cout<<"\n no reverse IP file found... first do reverse IP for this function";
					
				else
				{
					while(fin)
					{
						char crawler[100]="python crawler.pyc -u http://www.";
						fin.getline(web,50,'\n');
						strcat(crawler,web);
						strcat(crawler," -w crawl.txt");
						system(crawler);
						system("mv *.crawler ~/Desktop/india");
					}
		
				}
				fin.close();
				
				cout<<"\npress c to continue to main menu  ";
				cin>>c;
				if(c=='c')
					goto top;
				else
					break;
			case 9:
				system("perl LFIscanner.pl");
				cout<<"\npress c to continue to main menu  ";
				cin>>c;
		
				if(c=='c')
					goto top;
				else
					break;
			case 10:
				system("./hide");
				cout<<"\npress c to continue to main menu  ";
				cin>>c;
		
				if(c=='c')
					goto top;
				else
					break;
			case 11:
				system("clear");
				cout<<"\n		UNDER CONSTRUCTION";
				cout<<"\npress c to continue to main menu  ";
				cin>>c;
				if(c=='c')
					goto top;
				else
					break;
		
			case 12:
				system("clear");
				system("./bingoo");
				cout<<"\npress c to continue to main menu  ";
				cin>>c;
				if(c=='c')
					goto top;
				else
					break;
			case 13:
				system("clear");
				//char sqli[100]=" python2.7 Domain-SQLi-finder.py --url ";
				cout<<"\n\n\n  1) Scan a single website ";
				cout<<"\n\n\n 2) Scan whole server  ";
				cin>>choice;
				
					switch(choice)
					{
						case 1:
							//char sqli[100]=" python2.7 Domain-SQLi-finder.py --url ";
							cout<<"\n\n Enter website ";
							cin>>web;
							strcat(sqli,web);
							cout<<"\n\n enter output file name ";
							cin>>output;
							strcat(sqli , " --output ");
							strcat(sqli ,output);
							system(sqli);
							
							//break;
							
							cout<<"\n press c to continue to main menu  ";
							char c;
							if(c=='c')
								goto top;
							else 
								break;
								
						case 2:
						
							sqlif();
							
						
							
					}
				
			
			case 99:
				system("rm ~/Desktop/india/result.txt");
		
			
		}
	
	
	}
	else
	exit(0);


	
}

void viewrevip()
{
	int i=1;
	int count=1;
	char web[50],c;
	system("clear");
	ifstream fin;
	system("cp ~/Desktop/india/result.txt /opt/icp/");
	system("clear");
	fin.open("result.txt",ios::in);
	if(!fin)
		cout<<"\n	No reverse IP file found ";
	else
	{
		while(fin)
		{
		
			fin.getline(web,50,'\n');
			cout<<i<<":) "<<web<<endl;
			i++;
			count++;
			if(count==32)
			{
				
				cout<<"\n press any key to continue ";
				cin>>c;
				count=0;
				system("clear");
			}
		
		}
		
		
		system("rm result.txt");
	} 
		
	
		
		
}



void limited(int m,int n)
{
	cout<<m<<endl;
	char web[50];
	ifstream fin;
	
	int start=1,end,count=0;
	end=getcount();
	//char crawler[100]="python buster.pyc http://www.";
	fin.open("result.txt",ios::in);
	if(!fin)
	{
		cout<<"\n no reverse IP file found... first do reverse IP for this function";
	}
	else
	{	if(n==2)
		
		{	cout<<"\nenter start";
			cin>>start;
			cout<<"\nenter end";
			cin>>end;
		}
		while(fin)
		{
			char crawler[100]="python buster.pyc http://www.";
			fin.getline(web,50,'\n');
			count++;
			if (count>=start && count<=end)
			{
				strcat(crawler,web);
				if(m==4)
				{
					cout<<"\ndirectory check"<<endl;
					strcat(crawler," -m dir");
				}
				if(m==3)
				{
					cout<<"\nadmin path check"<<endl;
					strcat(crawler," -m admin");
				}
				if(m==5)
				{
					cout<<"\n sensitive files check ";
					strcat(crawler," -m files");
				}
				if(m==6)
				{
					cout<<"\n shell check ";
					strcat(crawler," -m shell");
				}
				if(m==7)
				{
					cout<<"\n backup check ";
					strcat(crawler," -m backup");
				}
				system(crawler);
				system("mv http:* ~/Desktop/india/");
				
				char crawler[100]="python buster.pyc http://www.";
			}
		}
							
		
	}
	fin.close();
	count=0;

}

int getcount()
{
	char web[50];
	ifstream fin;
	fin.open("result.txt",ios::in);
	int count=0;
	if(!fin)
		cout<<"\n no reverse ip file found ";
	else 
	{
		while(fin)
		{
			fin.getline(web,50,'\n');
			count++;
		}
	}
	cout<<"\n there are "<<count-1 <<" websites in reverse ip file "<<endl;
	return count;
}

void sqlif()
{
	ifstream fin;
	char web[50];
	system("cp ~/Desktop/india/result.txt /opt/icp");
	fin.open("result.txt",ios::in);
	if(!fin)
		cout<<"\n no reverse IP file found dude...";
	else 
	{
		while(fin)
		{
			char sqli[100]=" python2.7 Domain-SQLi-finder.py --url ";
			fin.getline(web,50,'\n');
			strcat(sqli,web);
			//cout<<"\n\n enter output file name ";
			//cin>>output;
			strcat(sqli , " --output ");
			strcat(sqli ,web);
			system(sqli);
			char output[50]="mv ";
			strcat(output,web);
			strcat(output," ~/Desktop/india");
			system(output);
			
							

			
		}
	}
}

