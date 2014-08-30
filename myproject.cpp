#include<iostream>
#include<cstdlib>
#include<string.h>
#include<fstream>
using namespace std;
char pass[25];
char corrpass[25]="printresult";
char corrpass1[25]="faado";
char cha='y';
int main()

{
cout<<"\n enter pass :";
cin>>pass;
if(strcmp(corrpass,pass)==0 )
do
{
system("cd /opt/icp");

char c;
char hash1[30];
char hash2[100]="python hash.pyc";
char hashtype[10];
int hashchoice;
char web[50];
char revip1[100]="perl revip.pl -s ";
char revip2[20]=" -o result.txt";
char revfinal[100];
ifstream fin;
/*======================================================================================*/
cout<<"CODED BY INTRUD3R H4x0r.. TEAM ICP (Indian Cyber POlice).. JAI HIND";
/*======================================================================================*/
main:
system("pwd");
cout<<"\n Enter your choice";
cout<<"\n	1)decrypt your encrypted  key";
cout<<"\n	2)reverse ip"; 	
cout<<"\n	3)Look for admin page of every website on sever"; 
cout<<"\n	4)look for sensitive directories of every website on server";
cout<<"\n	5)look for sensitive files of every website on server";
cout<<"\n	6)Look for pre-existing shells on every website on server";
cout<<"\n	7)look for backup files on server";
cout<<"\n	8)crawl every website on server";
cout<<"\n	9)LFI scanner";
cout<<"\n	10)Grab HideMyAss proxy(courtesy r00tw0rm)   ";
cout<<"\n	11)Resove CloudFlare IP (courtesy r00tw0rm)";  
cout<<"\n	12)Bing00... Bing and Google d0rk scanner";

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
				cout<<endl<<endl<<endl;
				cout<<"\npress c to continue to main menu  ";
				cin>>c;
				if(c=='c')
					goto main;
				else
					exit(0);
		
			
			case 2:
				cout<<"\n enter the hash :-";
				cin>>hash1;
				cout<<endl<<endl<<endl;
				strcat(hash2," MD5 -h ");
				strcat(hash2,hash1);
				strcat(hash2," -g ");
				system(hash2);
				cout<<endl<<endl<<endl;
				cout<<"\npress c to continue to main menu  ";
				cin>>c;
				if(c=='c')
					goto main;
				else
					exit(0);
			
			case 3:		
				cout<<"\n enter the hash :-";
				cin>>hash1;
				cout<<endl<<endl<<endl;
				strcat(hash2," SHA1 -h ");
				strcat(hash2,hash1);
				strcat(hash2," -g ");
				system(hash2);
				cout<<endl<<endl<<endl;
				cout<<"\npress c to continue to main menu  ";
				cin>>c;
				if(c=='c')
					goto main;
				else
					exit(0);
		
			case 4:
				cout<<"\n enter the hash :-";
				cin>>hash1;
				cout<<endl<<endl<<endl;
				strcat(hash2," SHA224 -h ");
				strcat(hash2,hash1);
				strcat(hash2," -g ");
				system(hash2);
				cout<<endl<<endl<<endl;
				cout<<"\npress c to continue to main menu  ";
				cin>>c;
				if(c=='c')
					goto main;
				else
					exit(0);
		
	
			case 5:
				cout<<"\n enter the hash :-";
				cin>>hash1;
				cout<<endl<<endl<<endl;
				strcat(hash2," SHA256 -h ");
				strcat(hash2,hash1);
				strcat(hash2," -g ");
				system(hash2);
				cout<<endl<<endl<<endl;
				cout<<"\npress c to continue to main menu  ";
				cin>>c;
				if(c=='c')
					goto main;
				else
					exit(0);
		
			case 6:
				cout<<"\n enter the hash :-";
				cin>>hash1;
				cout<<endl<<endl<<endl;
				strcat(hash2," SHA384 -h ");
				strcat(hash2,hash1);
				strcat(hash2," -g ");
				system(hash2);
				cout<<endl<<endl<<endl;
				cout<<"\npress c to continue to main menu  ";
				cin>>c;
				if(c=='c')
					goto main;
				else
					exit(0);
			case 7:
				cout<<"\n enter the hash :-";
				cin>>hash1;
				cout<<endl<<endl<<endl;
				strcat(hash2," SHA512 -h ");
				strcat(hash2,hash1);
				strcat(hash2," -g ");
				system(hash2);
				cout<<endl<<endl<<endl;
				cout<<"\npress c to continue to main menu  ";
				cin>>c;
				if(c=='c')
					goto main;
				else
					exit(0);
			case 8:
				cout<<"\n enter the hash :-";
				cin>>hash1;
				cout<<endl<<endl<<endl;
				strcat(hash2," RMD160 -h ");
				strcat(hash2,hash1);
				strcat(hash2," -g ");
				system(hash2);
				cout<<endl<<endl<<endl;
				cout<<"\npress c to continue to main menu  ";
				cin>>c;
				if(c=='c')
					goto main;
				else
					exit(0);
			case 9:
				cout<<"\n enter the hash :-";
				cin>>hash1;
				cout<<endl<<endl<<endl;
				strcat(hash2," GOST -h ");
				strcat(hash2,hash1);
				strcat(hash2," -g ");
				system(hash2);
				cout<<endl<<endl<<endl;
				cout<<"\npress c to continue to main menu  ";
				cin>>c;
				if(c=='c')
					goto main;
				else
					exit(0);
			case 10:
				cout<<"\n enter the hash :-";
				cin>>hash1;
				cout<<endl<<endl<<endl;
				strcat(hash2," WHIRLPOOL -h ");
				strcat(hash2,hash1);
				strcat(hash2," -g ");
				system(hash2);
				cout<<endl<<endl<<endl;
				cout<<"\npress c to continue to main menu  ";
				cin>>c;
				if(c=='c')
					goto main;
				else
					exit(0);
			case 11:
				cout<<"\n enter the hash :-";
				cin>>hash1;
				cout<<endl<<endl<<endl;
				strcat(hash2," LM -h ");
				strcat(hash2,hash1);
				strcat(hash2," -g ");
				system(hash2);
				cout<<endl<<endl<<endl;
				cout<<"\npress c to continue to main menu  ";
				cin>>c;
				if(c=='c')
					goto main;
				else
					exit(0);
			case 12:
				cout<<"\n enter the hash :-";
				cin>>hash1;
				cout<<endl<<endl<<endl;
				strcat(hash2," NTLM -h ");
				strcat(hash2,hash1);
				strcat(hash2," -g ");
				system(hash2);
				cout<<endl<<endl<<endl;
				cout<<"\npress c to continue to main menu  ";
				cin>>c;
				if(c=='c')
					goto main;
				else
					exit(0);
		
			case 13:
				cout<<"\n enter the hash :-";
				cin>>hash1;
				cout<<endl<<endl<<endl;
				strcat(hash2," MYSQL-h ");
				strcat(hash2,hash1);
				strcat(hash2," -g ");
				system(hash2);
				cout<<endl<<endl<<endl;
				cout<<"\npress c to continue to main menu  ";
				cin>>c;
				if(c=='c')
					goto main;
				else
					exit(0);
			case 14:
				cout<<"\n enter the hash :-";
				cin>>hash1;
				cout<<endl<<endl<<endl;
				strcat(hash2," CISCO7 -h ");
				strcat(hash2,hash1);
				strcat(hash2," -g ");
				system(hash2);
				cout<<endl<<endl<<endl;
				cout<<"\npress c to continue to main menu  ";
				cin>>c;
				if(c=='c')
					goto main;
				else
					exit(0);
			case 15:
				cout<<"\n enter the hash :-";
				cin>>hash1;
				cout<<endl<<endl<<endl;
				strcat(hash2," JUNIPER -h ");
				strcat(hash2,hash1);
				strcat(hash2," -g ");
				system(hash2);
				cout<<endl<<endl<<endl;
				cout<<"\npress c to continue to main menu  ";
				cin>>c;
				if(c=='c')
					goto main;
				else
					exit(0);
			case 16:
				cout<<"\n enter the hash :-";
				cin>>hash1;
				cout<<endl<<endl<<endl;
				strcat(hash2," LDAP_MD5 -h ");
				strcat(hash2,hash1);
				strcat(hash2," -g ");
				system(hash2);
				cout<<endl<<endl<<endl;
				cout<<"\npress c to continue to main menu  ";
				cin>>c;
				if(c=='c')
					goto main;
				else
					exit(0);
			case 17:
				cout<<"\n enter the hash :-";
				cin>>hash1;
				cout<<endl<<endl<<endl;
				strcat(hash2," LDAP_SHA1 -h ");
				strcat(hash2,hash1);
				strcat(hash2," -g ");
				system(hash2);
				cout<<endl<<endl<<endl;
				cout<<"\npress c to continue to main menu  ";
				cin>>c;
				if(c=='c')
				{	system("clear");
					goto main;}
				else
					exit(0);
			case 99:
				system("clear");
				goto main;
		




		
		}



		break;
	
		
		
	case 2:
		cout<<endl<<endl<<endl;
		cout<<"\ninitiating reverse ip check";
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
			goto main;
		else
			exit(0);
	case 3:
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
				char crawler[100]="python buster.pyc http://www.";
				fin.getline(web,50,'\n');
				strcat(crawler,web);
				strcat(crawler," -m admin");
				system(crawler);
			}

		}
		fin.close();
		cout<<"\npress c to continue to main menu  ";
		cin>>c;
		if(c=='c')
			goto main;
		else
			exit(0);
	case 4:
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
				char crawler[100]="python buster.pyc http://www.";
				fin.getline(web,50,'\n');
				strcat(crawler,web);
				strcat(crawler," -m dir");
				system(crawler);
			}

		}
		fin.close();
		cout<<"\npress c to continue to main menu  ";
		cin>>c;
		if(c=='c')
			goto main;
		else
			exit(0);
	case 5:
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
				char crawler[100]="python buster.pyc http://www.";
				fin.getline(web,50,'\n');
				strcat(crawler,web);
				strcat(crawler," -m files");
				system(crawler);
			}

		}
		fin.close();
		cout<<"\npress c to continue to main menu  ";
		cin>>c;
		if(c=='c')
			goto main;
		else
			exit(0);
	case 6:
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
				char crawler[100]="python buster.pyc http://www.";
				fin.getline(web,50,'\n');
				strcat(crawler,web);
				strcat(crawler," -m shell");
				system(crawler);
			}

		}
		fin.close();
		cout<<"\npress c to continue to main menu  ";
		cin>>c;
		if(c=='c')
			goto main;
		else
			exit(0);

	case 7:
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
				char crawler[100]="python buster.pyc http://www.";
				fin.getline(web,50,'\n');
				strcat(crawler,web);
				strcat(crawler," -m backup");
				system(crawler);
			}

		}
		fin.close();
		cout<<"\npress c to continue to main menu  ";
		cin>>c;
		if(c=='c')
			goto main;
		else
			exit(0);
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
			}

		}
		fin.close();
		cout<<"\npress c to continue to main menu  ";
		cin>>c;
		if(c=='c')
			goto main;
		else
			exit(0);
	case 9:
		system("perl LFIscanner.pl");
		cout<<"\npress c to continue to main menu  ";
		cin>>c;

		if(c=='c')
			goto main;
		else
			exit(0);
	case 10:
		system("./hide");
		cout<<"\npress c to continue to main menu  ";
		cin>>c;

		if(c=='c')
			goto main;
		else
			exit(0);
	case 11:
		system("clear");
		cout<<"\n		UNDER CONSTRUCTION";
		cout<<"\npress c to continue to main menu  ";
		cin>>c;
		if(c=='c')
			goto main;
		else
			exit(0);

	case 12:
		system("clear");
		system("./bingoo");
		cout<<"\npress c to continue to main menu  ";
		cin>>c;
		if(c=='c')
			goto main;
		else
			exit(0);

	
}


}while(cha=='y');





}
