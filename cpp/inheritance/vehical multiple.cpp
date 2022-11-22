#include<iostream>
using namespace std;
class vehical
{
	protected:
		string brand;
	public :
		void accept()
		{
	 cout<<"\n enter the brand"	;
	 cin>>brand;
      }
};
class bike:public vehical
{
	protected:
	    string bname;
     	float bprice;
    public:
	void get()
	{
	cout<<"\n enter the bname";
	cin>>bname;
	cout<<"\n enter the bprice";
	cin>>bprice;
}
};
class car : public bike
{
	protected:
	string cname;
	int cmodel_no;
	public:
	void	getdata()
    {
	cout<<"\n enter the cname";
	cin>>cname;
	cout<<"\n enter the cmodel_no";
	cin>>cmodel_no;
    }
	void display()
	{
	cout<<"\n brand"<<brand;
	cout<<"\n bname"<<bname;
	cout<<"\n bprice"<<bprice;
	cout<<"\n cname"<<cname;
	cout<<"\n cmodel_no"<<cmodel_no;	
	}
};
main()
{
	car c;
	c.accept();
	c.get();
	c.getdata();
	c.display();
}


