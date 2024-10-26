#include <iostream>
using namespace std;

char dummychar;
class fraction
{
private:
    int numer, denom;
public:
    void getfrac()
    {
        cout << "Enter the fraction: " ;
        cin >> numer >> dummychar >> denom ;
    }
    void dispfrac()
    {
        cout << "The fraction is " << numer << dummychar << denom << endl ;
    }
    void addfrac(fraction, fraction);
};
//------------------------------------------------------------------------------
void fraction::addfrac(fraction a, fraction b)
{
    a.getfrac();
    b.getfrac();
    numer = a.numer*b.denom + a.denom*b.numer;
    denom = a.denom*b.denom;
}
//------------------------------------------------------------------------------
int main()
{
    fraction fr1, fr2, fr3;
    char ans = 'y';
    fr1.getfrac();
    fr1.dispfrac();
    while (ans == 'y')
    {
        fr3.addfrac(fr1, fr2);
        fr3.dispfrac();
        cout << "Do you want to continue calculation (y/n): " ;
        cin >> ans ;
    }
    return 0;
}
