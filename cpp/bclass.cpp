#include<iostream>
using namespace std;
class book
{
	private:
		int bid;
		char bname;
		float bprice;
	public:
	    void accept()
	{
	cout<<"\n enter bid=";
	cin>>bid;
	cout<<"\n enter bname=";
	cin>>bname;
	cout<<"\n enter bprice=";
	cin>>bprice;	
   }
   void display()
   {
   	cout<<"\n "<<bid;
   	cout<<"\t"<<bname;
   	cout<<"\t"<<bprice;
   }
};
main()
{
	book b[10];
	int i,n;
	cout<<"\n enter no of records=";
	cin>>n;
	for(i=0;i<n;i++)
	{
	b[i].accept();
    }
    cout<<"\n bid \tbname \tbprice";
    for(i=0;i<n;i++)
    {
	b[i].display();
    }
}
