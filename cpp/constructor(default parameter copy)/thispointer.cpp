#include<iostream>//this pointer
using namespace std;
class employee
{
	private:
		int id;
		string name;
		float salary;
		public:
			employee(int id,string name,float salary)
			{
				this->id=id;
				this->name=name;
				this->salary=salary;
			}
			void display()
			{
				cout<<"\n id="<<id;
				cout<<"\n name="<<name;
				cout<<"\n salary="<<salary;
			}
};
main()
{
	employee e1(1,"pooja",45666);
	e1.display();
	employee e2(2,"rakesh",45666);
	e2.display();
}
