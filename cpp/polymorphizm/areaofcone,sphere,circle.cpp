#include<iostream>
using namespace std;
float area(float R,float H)//area of cone
{
	return (1.0/3.0)*3.14*(R*R)*H;	
}
float area(float r)//area of sphere
{
	return 4*3.14*r*r;
}
double area(int r)//area of circle
{
	return 3.14*r*r;
}
main()
{
	cout<<"\n area of cone= "<<area(2,3);
	cout<<"\n area of sphere="<<area(3);
	cout<<"\n area of circle="<<area(4);	
}
