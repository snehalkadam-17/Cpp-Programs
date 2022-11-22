#include<iostream>
using namespace std;
class mobile
{
	private: 
	int model_no;
	float price;                //states/data members
	string name;
	public:
		void accept()
		{
			cout<<"\n enter the model_no:";   //member fun & behaviour
			cin>>model_no; 
			cout<<"\n enter the name:";
			cin>>name;
			cout<<"\n enter the price:";
			cin>>price;
		}
        void display()
        {
        	cout<<"\n model_no="<<model_no;
        	cout<<"\n name="<<name;
        	cout<<"\n price="<<price;
		}
};
main()
{
	mobile m[10];
	int i,n;
	cout<<"\n no of records=";
	cin>>n;
	for(i=0;i<n;i++)
	{
		m[i].accept();
	}
	for(i=0;i<n;i++)
	{
		m[i].display();
	}
}
