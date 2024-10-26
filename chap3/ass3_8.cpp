#include <iostream>
#include <iomanip>
using namespace std;

int topence(int, int, int);
void frompence(int, int&, int&, int&);

int main()
{
    int a1, a2, a3, b1, b2, b3, c, c1, c2, c3;
    char ans='y', dummychar;
    cout << "Enter amount in old British style" << endl;
    while (ans=='y')
    {
        cout << "Enter first amount:" ;
        cin >> a1 >> dummychar >> a2 >> dummychar >> a3;
        cout << "Enter second amount:" ;
        cin >> b1 >> dummychar >> b2 >> dummychar >> b3;
        c=topence(a1, a2, a3)+topence(b1, b2, b3);
        frompence(c, c1, c2, c3);
        cout << "The total sum is " << '\x9c' << c1 << dummychar << c2 << dummychar << c3 << endl;
        cout << "Do you want to do another calculation (y/n)" << endl;
        cin >> ans;
    }
    return 0;
}
//----------------------------------------------------------------
int topence(int a, int b, int c)
{
    return 12*(20*a+b)+c;
}
//----------------------------------------------------------------
void frompence(int a, int& b, int& c, int& d)
{
    b=a/240;
    c=(a%240)/12;
    d=(a%240)%12;
}
