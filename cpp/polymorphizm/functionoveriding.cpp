#include<iostream>
using namespace std;
//fuction overriding
class base
{
	public:
		void display()
		{
			cout<<"\n it is base class";
		}
};
class derived :public base
{
	public:
		void display()
		{
			cout<<"\n it is derived class";
		}
};
main()
{
	derived d;
	d.display();
}
