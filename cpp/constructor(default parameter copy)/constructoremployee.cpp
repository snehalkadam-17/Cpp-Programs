#include<iostream>
using namespace std;
class employee
{
	private:
		int eid;
		string ename;
		float esalary;
		public:
			employee()//default constructor
			{
				eid=1;
				ename="raj";
				esalary=78000;
			}
			employee(int i,string n,float s)//parameterized constructor
			{
				eid=i;
				ename=n;
				esalary=s;
			}
			void display()
			{
				cout<<"\n eid= "<<eid;
				cout<<"\n ename= "<<ename;
				cout<<"\n esalary= "<<esalary;
			}
};
main()
{
	employee e1;
	e1.display();
	employee e2(2,"tiger",15999);
	e2.display();
}
