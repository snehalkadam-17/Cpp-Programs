//hierchical
#include<iostream>
using namespace std;
class Bank 
{
	protected:
		string bname,branch_name;
		public:
			void accept()
			{
				cout<<"\n enter the bname=";
				cin>>bname;
				cout<<"\n enter the branch_name=";
				cin>>branch_name;
			}
			void display()
			{
				cout<<"\n bname="<<bname;
				cout<<"\n branch_name"<<branch_name;
			}
};
class customer: public Bank
{
	protected:
		int account_type;
		float balance;
		public:
			void get()
			{
				cout<<"\n enter the account_type=";
				cin>>account_type;
				cout<<"\n enter the balace=";
				cin>>balance;
			}
			void put()
			{
				cout<<"\n the account_type="<<account_type;
				cout<<"\n balance="<<balance;
			}
};
class worker: public Bank
{
	protected:
		string post;
		float salary;
		public:
			void get_data()
			
			{
			
				cout<<"\n enter the post=";
				cin>>post;
				cout<<"\n enter the salary=";
				cin>>salary;
			}
			void put_data()
			{
				
				
				  cout<<"\n post="<<post;
				cout<<"\n salary="<<salary;
			}
};
main()
{
	worker w;
	w.accept();
	w.get_data();
	w.put_data();
	customer c;
	c.accept();
	c.get();
	c.put();
}


































































































































