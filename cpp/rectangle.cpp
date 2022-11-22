//:: scope resolution //
//fuction defination outsides of class
#include<iostream>
using namespace std;
class rectangle
{
	private:
		int l,b;
		public :
		void accept();
		void calculate();
};
void rectangle::accept()
{
	cout <<"\n enter l and b=";
	cin>>l>>b;
}
void rectangle::calculate()
{
	int area ;
	area=l*b;
	cout<<"\n area of rect="<<area;
}
main()
{
	rectangle r;
	r.accept();
	r.calculate();
}
