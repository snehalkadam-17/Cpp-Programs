#include<iostream>
using namespace std;
class book1
{
	protected:
		string author;
		public:
			void accept()
			{
				cout<<"\n enter the author=";
				cin>>author;
			}
			void display()
			{
				cout<<"\n author="<<author;
			}
};
class audio_casette: public book2
{
	protected:
		float playing_time;
		public: 
		void get()
		{
			cout<<"\n enter the playing_time";
			cin>>playing_time;
		}
		void put()
		{
			cout<<"\n playing_time="<<playing_time;
		}
};
class publication: public book1,public book2
{
	protected:
		string title;
		float price;
		public:
			void get_data()
			{
				cout<<"\n enter the title=";
				cin>>title;
				cout<<"\n enter the price=";
				cin>>price;
			}
			void put_data()
			{
				cout<<"\n title="<<title;
				cout<<"\n price="<<price;
			}
};
main()
{
	book1 b;
	b.accept();
	b.display();
	b.get();
	b.put();
	publication p;
	p.get_data();
	p.put_data();
}
