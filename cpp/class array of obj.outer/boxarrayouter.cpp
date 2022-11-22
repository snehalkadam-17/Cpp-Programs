#include<iostream>
using namespace std;
class box
{
	private:
		int length,width,height;
	public:
	    void accept();
		void area();
};
void box::accept()
{
	cout<<"\n enter length,width,height";
	cin>>length>>width>>height;
}
void box::area()
{
	int a=height*length*width;
	cout<<"\n area of box="<<a;
}
main()
{
	box b1[20];
	int i,n;
	cout<<"\n enter the no of records=";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		b1[i].accept();
	}
	for(i=0;i<=n;i++)
	{
		b1[i].area();
	}
}
