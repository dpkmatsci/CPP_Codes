#include <iostream>
using namespace std;

// This script calculates greatest common divisor
int main()
{
    unsigned int a, b, temp, rem ;
    cout << "Enter the first integer:" ;
    cin >> a ;
    cout << "Enter the second integer:" ;
    cin >> b ;
    if (a>b)
    {
        temp = b;
        b = a;
        a = temp;
    }
    if (a!=0)
    {
        rem = b%a;
        while (rem != 0)
        {
            b = a;
            a = rem;
            rem = b%a;
        }
        cout << "The greatest common divisor is " << a << endl;
    }
    else
        cout << "The calculation of GCD is not possible for one integer being 0" ;
    return 0;
}
