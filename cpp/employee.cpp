#include<iostream>
using namespace std;
class employee
{
	private:
		int id;
		char name[20];
		float salary;
		public:
			void accept()
			{
				cout<<"\n enter id=";
				cin>>id;
				cout<<"\n enter name=";
				cin>>name;
				cout<<"\n enter salary=";
				cin>>salary;
			}
			void display()
			{
				cout<<"\n id="<<id;
				cout<<"\n name="<<name;
				cout<<"\n salary"<<salary;
			}
};
main()
{
	employee e1;
	e1.accept();
	e1.display();
}
