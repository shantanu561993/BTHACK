#include<iostream>
#include<cstdlib>
#include<string.h>
#include<fstream>

using namespace std;

int main()
{
char web[50];
ifstream fin;
char sqli[100]=" python2.7 Domain-SQLi-finder.py --url ";
cout<<"\n Enter Output file name   :";
char output[20];
cin>>output;

fin.open("result.txt",ios::in);

while(fin.eof()!=1)
{
char sqli[100]=" python2.7 Domain-SQLi-finder.py --url ";

fin.getline(web,50,'\n');
strcat(sqli,web);
strcat(sqli , " --output ");
strcat(sqli,output);
cout<<sqli<<endl;
system(sqli);


}

}

