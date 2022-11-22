#include<iostream>
using namespace std;
class box
{
	private:
		int height,width,length;
	public:
	    void accept();
		void area();	
};
void box::accept()
{
	cout<<"\n enter height,width,length=";
	cin>>height>>width>>length;
}
void box::area()
{
	int a=height*width*length;
	cout<<"\n area of box="<<a;
}
main()
{
	box b1;
	b1.accept();
	b1.area();
}

