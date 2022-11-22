//single inheritance
#include<iostream>
using namespace std;
class Person
{
	protected:
		int id;
		string name;
		public:
			void accept()
			{
			cout<<"\n enter the id =";
			cin>>id;
			cout<<"\n enter the name =";
			cin>>name;
		    }
		    void display()
		    {
		    	cout<<"\n id="<<id;
		    	cout<<"\n name="<<name;
			}
};
class employee : public Person
{
	protected:
		float bs,hra,da,ta; 
	public:
	    void get()
		{	
		cout<<"\n enter basic salary of an employee";
		cin>>bs;
		if(bs<=10000)
		{
			da=bs*0.8;
			hra=bs*0.2;
		}
		else if(bs<=20000)
		{
			da=bs*0.9;
			hra=bs*25;
		}
		else
		{
			da=bs*0.95;
			hra=bs*0.3;
		}
	}
	void put()
	{
		ta=bs+hra+da;
		cout<<"\n total amount of employee="<<ta;
		cout<<"\n basic salary of employee="<<bs;
		cout<<"\n hra="<<hra;
		cout<<"\n da="<<da;
   }
};
main()
{
	Person p;
	p.accept();
	p.display();
	employee e;
	e.get();
	e.put();
}

