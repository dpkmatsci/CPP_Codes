#include <iostream>
using namespace std;

int main()
{
    struct phone
    {
        unsigned int arcode, exchange, numb;
    };
    phone ph1={212, 767, 8900};
    phone ph2;
    cout << "Enter area code, exchange and number:" <<endl;
    cin >> ph2.arcode >> ph2.exchange >> ph2.numb;
    cout << "My number is " << '(' << ph1.arcode << ')' << ph1.exchange << '-' << ph1.numb << endl;
    cout << "your number is " << '(' << ph2.arcode << ')' << ph2.exchange << '-' << ph2.numb << endl;
    return 0;
}
