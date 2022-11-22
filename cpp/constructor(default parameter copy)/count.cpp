#include<iostream>
using namespace std;
class counter
{
    private:
        int count;
    public:
        counter()       // constructor
        {
            count=0;
        }

        void accept()
        {
            count++;
        }
        int get_count()
        {
        	return count;
		}  
};
main ()
{
    counter c1;
     cout<<"\n before calling counter function,count = ";
       cout<<c1.get_count();
       c1.accept();
     cout<<"\n\n after calling counter function,count =";
	   cout<<c1.get_count(); 
	   counter c2;
	   c2.accept();
	   cout<<c2.get_count();

}
 
