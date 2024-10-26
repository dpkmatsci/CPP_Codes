#include <iostream>
using namespace std;

struct frctn
{
    int num, denom;
};

int main()
{
    frctn a, b, c;
    char dummychar;
    cout << "Enter first fraction: " ;
    cin >> a.num >> dummychar >> a.denom ;
    cout << "Enter second fraction: " ;
    cin >> b.num >> dummychar >> b.denom ;
    c.num = (a.num*b.denom+b.num*a.denom);
    c.denom = a.denom*b.denom;
    cout << "The result of sum is : " << c.num << dummychar << c.denom << endl;
    return 0;
}
