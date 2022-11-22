#include<iostream>
using namespace std;

class date
{
    private:
        int dd,mm,yy;

    public:
	date()
        {
            dd=8;
            mm=9;
            yy=2022;
            cout<<"\n date object created \n";
        }
         void display()
        {
            cout<<"\n the entered date is = "; 
            cout<<dd<<"-"<<mm<<"-"<<yy<<"\n";
        }
};
main ()
{
date d1;
d1.display();
}


