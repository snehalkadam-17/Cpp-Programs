#include<iostream>
using namespace std;
class student

{
	private:
	       int rollno;
		   char name[20];
		   float marks;
	public:
	void accept()
	{
		cout<<"\n enter the rollno=";
		cin>>rollno;
		cout<<"\n enter the name=";
		cin>>name;
		cout<<"\n enter the marks=";
		cin>>marks;
			   }
			   void display()
			   {
			   	cout<<"\n rollno"<<rollno;
			   	cout<<"\n name="<<name;
				cout<<"\n marks="<<marks;  
				   						  }	   	
};
main()
{
	student s1,s2,s3;
	s1.accept();
	s1.display();
	s2.accept();
	s2.display();
	s3.accept();
	s3.display();

}
