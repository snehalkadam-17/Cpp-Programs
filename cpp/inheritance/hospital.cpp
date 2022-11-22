//multilevel inheritance
#include<iostream>
using namespace std;
class hospital
{
	protected:
		string hname,haddr,content;
	public:
	  void accept()
	  {
	  	cout<<"\n enter the hname=";
	  	cin>>hname;
	  	cout<<"\n enter the haddress=";
	  	cin>>haddr;
	  	cout<<"\n enter the content=";
	  	cin>>content;
	   }	
};
class patient :public hospital
{
	protected:
		int pid;
		string name,pwardname;
	public:
	    void get()
		{
			cout<<"\n enter the id of patient=";
			cin>>pid;
			cout<<"\n enter the name of patient=";
			cin>>name;
			cout<<"\n enter the ward name of patient=";
			cin>>pwardname;
			}	
};
class bill : public patient
{
	protected:
		int billdate,billamount;
	public:
	 void getdata()
	 {
	 	cout<<"\n enter the date of bill=";
	 	cin>>billdate;
	 	cout<<"\n enter the amount of bill=";
	 	cin>>billamount;
		 }	
	 void display()
	 {
	 	cout<<"\n pid="<<pid;
	    cout<<"\n name="<<name;
		cout<<"\n pwardname="<<pwardname;
	 	cout<<"\n hname="<<hname;
		cout<<"\n haddr="<<haddr;
		cout<<"\n content="<<content;
	 	cout<<"\n billdate="<<billdate;
	 	cout<<"\n billamount="<<billamount;
		  }	 
};
main()
{
	bill b;
	b.accept();
	b.get();
	b.getdata();
	b.display();
}

