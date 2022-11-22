#include<iostream>
using namespace std;
void product(int a,int b)
{
	cout<<"\n product="<<a*b;
}
void product(float a,float b)
{
	cout<<"\n product="<<a*b;
}
void product(int a,float b)
{
	cout<<"\n product="<<a*b;
}
void product(float a,int b)
{
	cout<<"\n product="<<a*b;
}
main()
{
	product(3,2);
	product(6.4f,5.3f);
	product(4,2.5f);
	product(6.3f,6);
}
