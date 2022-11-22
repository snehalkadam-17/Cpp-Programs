#include<iostream>
using namespace std;
class sales
{
	private:
	char sname[10],pname[10];
	float q,t,com;
	public:
		void accept()
		{
			cout<<"\n enter salesman name:";
			cin>>sname;
			cout<<"\n enter product name=";
			cin>>pname;
			cout<<"\n how many sales saleman does";
			cin>>q;
			cout<<"\n enter target=";
			cin>>t;
		}
		void calculate()
		{
		//	cout<<"\n numbers of salesman=";
		//	cin>>q;
			if(q>t)
			{
				q=q-t;
				com=(0.25*q)+(0.1*t);
			}
			else
			if(q==t)
			{
				com==(0.1*t);
			}
		}
		void display()
		{
			cout<<"\n salesman="<<sname<<"\n product name"<<pname<<"\n commission of salesman"<<com;
			
			}	
};
main()
{
	int i,n;
	cout<<"\n salesmans information";
	cin>>n;
	sales s[20];
	for(i=0;i<n;i++)
	{
		s[i].accept();
		s[i].calculate();
	}
	for(i=0;i<n;i++)
    s[i].display();
}
		
		
