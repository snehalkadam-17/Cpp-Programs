#include<iostream>
#include<conio.h>
using namespace std;
class employee
{
      private: int eid;
               char ename[20];
               float bs,hra,da,gs;
public:
     void accept();
     void display(float,float);
};
void employee::accept()
{
cout<<"\n Enter Employee id : ";
cin>>eid;
cout<<"\n Enter Employee name : ";
cin>>ename;
cout<<"\n Enter Basic salary : ";
cin>>bs;
}
void employee::display(float hra=30,float da=12)
{
hra=bs*0.30;
da=bs*0.12;
gs=bs+hra+da;
cout<<"\n eid= "<<eid;
cout<<"\n ename= "<<ename;
cout<<"\n basic salary= "<<bs;
cout<<"\n hra= "<<hra;
cout<<"\n da= "<<da;
cout<<"\n gross salary="<<gs;
}
main()
{
employee e1;
e1.accept();
e1.display();
}
