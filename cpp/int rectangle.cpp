#include<iostream>
using namespace std;
class rectangle
{
	private:
		int l,b;
		public :
		void accept();
		int calculate();
};
void rectangle::accept()
{
	cout <<"\n enter l and b=";
	cin>>l>>b;
}
int rectangle::calculate()
{
	return l*b;

}
main()
{
	rectangle r;
	r.accept();
	cout<<"\n area of rectangle= "<<r.calculate();
	
}
