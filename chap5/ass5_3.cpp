#include <iostream>
using namespace std;

void zerosmall(float&, float&);

int main()
{
    float a, b;
    cout << "Enter two numbers: " ;
    cin >> a >> b ;
    zerosmall(a, b);
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    return 0;
}
//--------------------------------------
void zerosmall(float& s, float& t)
{
    if (s<t)
        s=0;
    else if (t<s)
        t=0;
}
