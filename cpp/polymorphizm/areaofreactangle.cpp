#include<iostream>
using namespace std;
int area(int l,int b)
{
	return l*b;
}
double area(int r)
{
	return 3.14*r*r;
}
main()
{
	cout<<"\n area of rectangle="<<area(4,5);
	cout<<"\n area of circle="<<area(2);
}
