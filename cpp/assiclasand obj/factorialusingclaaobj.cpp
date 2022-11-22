#include <iostream>
using namespace std;

class Factorial
{
private:
    int n,fact = 1;

public:
    void calculate();
    void display();
};

void Factorial::calculate()
{
    cout << "Enter a number : " ;
    cin >> n;

    if (n== 0 || n == 1)
    {
        fact = 1;
    }
    else
    {
        while (n>1)
        {
            fact= fact*n;
            n--;
        }
    }
}

void Factorial::display()
{
    cout << "Factorial : " << fact;
}

 main()
{
    Factorial fact;
    fact.calculate();
    fact.display();
}


