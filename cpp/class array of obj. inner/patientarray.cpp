#include<iostream>
using namespace std;
class patient
{
	private:
		string name;
		float age,bill;
	public:
	    void accept()
	    {
	    	cout<<"\n enter patient name=";
	    	cin>>name;
	    	cout<<"\n enter patient age=";
	    	cin>>age;
	    	cout<<"\n enter patient bill=";
	    	cin>>bill;
		}
		void display()
		{
			cout<<"\n\n"<<name;
			cout<<"\t"<<age;
			cout<<"\t"<<bill;
		}
};
main()
{
	patient p[10];
	int i,n;
	cout<<"\n no of records=";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		p[i].accept();
	}
	for(i=1;i<=n;i++)
	{
		p[i].display();
	}
}
