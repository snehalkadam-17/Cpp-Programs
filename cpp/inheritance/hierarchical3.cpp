#include<iostream>
using namespace std;
class staff1//base class
{
 protected:
 	string medicine_name;
 public:
    void accept()
	{
		cout<<"\n enter the medicine_name=";
		cin>>medicine_name;
		}	
		void display()
		{
			cout<<"\n medicine_name="<<medicine_name;
		}
};
class doctor: public staff2
{
	protected:
		string dname,d_specilization;
		public:
			void get()
		{
			cout<<"\n enter the dname=";
			cin>>dname;
			cout<<"\n enter the d_specialization=";
			cin>>d_specialization;
		}
		void put()
		{
			cout<<"\n dname="<<dname;
			cout<<"\n d_specialization="<<d_specialization;
		}
};
class patient: public staff1,public staff2
{
	protected:
		int discharge;
		float bill;
		public:
			void get_data()
			{
				count<<"\n enter the discharge=";
				cin>>discharge;
				count<<"\n enter the bill=";
				cin>>bill;
			}
			void put_data()
			{
				cout<<"\n discharge="<<discharge;
				cout<<"\n bill="<<bill;
			}
};
main()
{
    A staff1
    B staff2
	staff s;
	s.accept();
	s.display();
	s.get();
	s.put();
	s.get_data();
	s.put_data();
}
