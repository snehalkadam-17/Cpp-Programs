#include<iostream>
using namespace std;
class cube
{
	private:int side;
	public:
	cube(int s)//parameterized constructor
	{
		side=s;
	}
	cube(cube &obj)//copy constructor
	{
		side=obj.side*obj.side*obj.side;
	}
	void display()
	{
		cout<<"\n volume of cube="<<side;
	}
};
main()
{
	cube s1(3);//calling parameterized contructor
	s1.display();
	cube s2(s1);
	s2.display();
}

