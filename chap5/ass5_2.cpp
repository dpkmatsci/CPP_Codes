#include <iostream>
using namespace std;
double power(double);
double power(double, int);

int main()
{
    double a, c;
    int b;
    cout << "Enter the number and power: " ;
    cin >> a >> b;
    c = power(a, b);
    cout << "Final answer is: " << c << endl;
    c=power(a);
    cout << "Final answer is: " << c << endl;
    return 0;
}
//-------------------------------------------------
double power(double a)
{
    return a*a;
}
//---------------------------------------------------
double power(double s, int t)
{
    double mult= 1;
    for (int i=1; i<=t; i++)
        mult=mult*s;
    return mult;
}
