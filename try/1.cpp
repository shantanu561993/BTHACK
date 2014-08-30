#include<iostream>
#include<cstdlib>
#include<fstream>
#include<string.h>
using namespace std;

int main()
{
char web[50];
ifstream fin;
int start,end,count=0;
char crawler[100]="python buster.pyc http://www.";
	fin.open("result.txt",ios::in);
						if(!fin)
						{
							cout<<"\n no reverse IP file found... first do reverse IP for this function";
						}
						else
						{
							cout<<"\nenter start";
							cin>>start;
							cout<<"\nenter end";
							cin>>end;
								
							while(fin)
							{
							
								char crawler[100]="python buster.pyc http://www.";
								fin.getline(web,50,'\n');
								count++;
								if (count>=start && count<=end)
								{
								
									strcat(crawler,web);
									strcat(crawler," -m dir");
									//system(crawler);
									cout<<crawler<<endl;
									char crawler[100]="python buster.pyc http://www.";
								}
								
							}
							
		
						}
						fin.close();
						count=0;
						//break;
	
}
