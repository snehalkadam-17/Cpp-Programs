#include<iostream>
using namespace std;
class prime
{
	private:
		int n;
		public:
			void accept();
			void display();
};
void prime::accept()
{
	cout<<"\n enter the number=";
	cin>>n;
}
void prime::display()
{
	
	
}
main()
{
	prime p1[20];
	int n,i;
	cout<<"\n enter the number of records=";
	cin>>n;
	for(i=0;i<n;i++)
	{
	  p1.accept();
	}
	for(i=0;i<n;i++)
	{
		p1.display();
	}	

}
