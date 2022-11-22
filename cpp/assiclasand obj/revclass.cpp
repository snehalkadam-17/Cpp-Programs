#include<iostream>
using namespace std;

class rev
{
        private:
            int n,n1,rn=0,d;
        public:
                void reverse();
                void calc();
                void display();
};

void rev::reverse()
{
        cout<<"\nEnter any number";
        cin>>n;
}

void rev::calc()
{
        n1=n;
        while(n>0)
        {
                d=n%10;
                rn=(rn*10)+d;
                n/=10;

        }
}

void rev::display()
{
                cout<<"\nReverse of "<<n1<<"="<<rn<<"\n";
}

int main ()
{
        rev r1;
        r1.reverse();
        r1.calc();
        r1.display();

        return 0;

}
