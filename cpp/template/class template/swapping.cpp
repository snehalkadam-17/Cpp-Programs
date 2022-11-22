#include<iostream>
using namespace std;
template<class T>
class A
{
	public:
		T n1,n2;
		public:
			A (T m ,T n )
			{
				n1=m;
				n2=n;
			}
			void swapping()
			{
				cout<<"\n values before swapping n1:"<<n1<<"\t n2:"<<n2;
				n1=n1+n2;
				n2=n1-n2;
				n1=n1-n2;
				cout<<"\n values after swapping n1:"<<n1<<"\t n2:"<<n2;
			}
};
main()
{
	A<float>a(3.4,4.5);
	a.swapping();
}
