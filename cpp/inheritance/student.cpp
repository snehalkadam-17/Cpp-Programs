//single inheritance
#include<iostream>
using namespace std;
class student
{
	protected:
		int rollno;
		string name;
    public:
		void accept()
		{
		cout<<"\n enter rollno =";
		cin>>rollno;
		cout<<"\n enter name =";
		cin>>name;
	    }
	    void display()
	    {
	    	cout<<"\n rollno="<<rollno;
	    	cout<<"\n name="<<name;
		}
		
};
class library: public student
{
	protected:
		int bid;
		string bname;
    public:
    void get()
    {
    cout<<"\n enter bid= ";
    cin>>bid;
    cout<<"\n enter bname=";
    cin>>bname;
    }
    void put()
    {
    	cout<<" bid="<<bid;
    	cout<<" bname="<<bname;
	}
    
};
main()
{
	library l;
	l.accept();
	l.display();
	l.get();
	l.put();
}
