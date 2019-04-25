
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<iostream.h>
#include<time.h>
#include<iomanip.h>
#include<fstream.h>
char f[10]="f";
char s[10]="s";
int addr,ad,flag,f1,d,m,i,amt;
float tamt;
class login
{
public:
    char id[100];
    char pass[100];
    char *password;
    void getid()
    {
        cout<<"Enter your id:";
        gets(id);
        password=getpass("Enter the password:");
        strcpy(pass,password);
    }
    void displayid()
    {
        cout<<"Id:";
        puts(id);
        cout<<"Password:";
        puts(pass);
    }
};
class detail
{
public:
    int tno;
    char tname[100];

    char bp[100];
    char dest[100];
    int c1,c1fare;
    int c2,c2fare;
    int d,m,y;
    void getdetail()
    {
        cout<<"Enter the details as follows\n";
        cout<<"Train no:";
        cin>>tno;
        cout<<"Train name:";
        gets(tname);
        cout<<"Boarding point:";
        gets(bp);
        cout<<"Destination pt:";
        gets(dest);
        cout<<"No of seats in first class & fare per ticket:";
        cin>>c1>>c1fare;
        cout<<"No of seats in second class & fare per ticket:";
        cin>>c2>>c2fare;
        cout<<"Date of travel:";
        cin>>d>>m>>y;
    }
    void displaydetail()
    {
        cout<<tno<<"\t"<<tname<<"\t"<<bp<<"\t"<<dest<<"\t";
        cout<<c1<<"\t"<<c1fare<<"\t"<<c2<<"\t"<<c2fare<<"\t";
        cout<<d<<"-"<<m<<"-"<<y<<"\t"<<endl;
    }
};

