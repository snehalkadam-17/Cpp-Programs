#include<iostream>
using namespace std;
class employee
{
	protected:
		int emp_id;
	    string emp_name;
	    public:
	    	void accept()
	    	{
	    		cout<<"\n enter the emp_id=";
	    		cin>>emp_id;
	    		cout<<"\n enter the emp_name=";
	    		cin>>emp_name;
			}
			void display()
			{
				cout<<"\n emp_id="<<emp_id;
				cout<<"\n emp-name="<<emp_name;
			}
};
class worker: public employee
{
	protected:
		float overtime_salary;
		public:
			void get()
			{
				cout<<"\n enter the overtime_salary=";
				cin>>overtime_salary;
			}
			void put()
			{
				cout<<"\n overtime_salary="<<overtime_salary;
			}
};
class manager: public employee
{
	protected:
		int additional_allowance;
		public:
			void get_data()
			{
				cout<<"\n enter the additional_allowance";
				cin>>additional_allowance;
			}
			void put_data()
			{
				cout<<"\n additional_allowance="<<additional_allowance;
			}
};
main()
{
    worker w;
	w.accept();
	w.display();
	w.get();
	w.put();
	manager m;
	m.get_data();
	m.put_data();
}
