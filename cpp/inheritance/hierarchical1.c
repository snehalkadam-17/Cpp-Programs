#include<iostream>
using namespace std;
class staff
{
	protected:
		int staff_code;
		public:
			void accept()
			{
				cout<<"\n enter the staff_code=";
				cin>>staff-code;
			}
			void display()
			{
				cout<<"\n staff_code"<<staf_code;
			}
};
class teacher: public staff
{
	protected:
		string subject;
		public:
			void get()
			{
				cout<<"\n enter the subject=";
				cin>>subject;
			}
			void put()
			{
				cout<<"\n subject="<<subject;
			}
};
class officer: public staff
{
	protected:
		string grade;
		public:
			void get_data()
			{
				cout<<"\n enter the grade=";
				cin>>grade;
			}
			void put_data()
			{
				cout<<"\n grade="<<grade;
			}
};
main()
{
	officer o;
	o.accept();
	o.display();
	o.get_data();
	o.put_data();
	o.get();
	o.put();

}
