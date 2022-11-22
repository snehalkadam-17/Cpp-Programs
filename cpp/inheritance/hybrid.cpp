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
			cout<<"\n enter rollno=";
			cin>>rollno;
			cout<<"\n enter name=";
			cin>>name;
		}
};
class test:public student
{
	protected:
	int part1;
	int part2;
    public:
	void get_test()
	{
		cout<<"\n enter part1=";
		cin>>part1;
		cout<<"\n enter part2=";
		cin>>part2;
	}
};
class sport
{
	protected:
		float score;
		public:
		void get_data()
			{
				cout<<"\n enter the score=";
				cin>>score;
			}
};
class result: public test,public sport
{
	protected:
		int total;
		public:
			void totalmarks()
			{
				total=part1+part2+score;
			}
			void display()
			{
			cout<<"\n rollno="<<rollno;
			cout<<"\n name="<<name;
			cout<<"\n part1="<<part1;
		    cout<<"\n part2="<<part2;
            cout<<"\n score"<<score;	
			}
};
main()
{
	result r;
	r.accept();
	r.get_test();
	r.get_data();
	r.display();
		}		
