//swapping
#include<iostream>
using namespace std;
//function template
template<class T>
void swap (T a,T b)
{
	a=a+b;
	b=a-b;
	a=a-b;
	cout<<"\n after swapping a="<<a<<"\t b="<<b<<endl;
	
}
main()
{
	swap(10,20);
	swap(1.2,2.4);
	swap('p','q');
}
