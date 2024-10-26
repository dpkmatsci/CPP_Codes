#include <iostream>
#include <cmath>
#include <stdlib.h>
#include <iomanip>
using namespace std;

char dummychar;
class fraction
{
private:
    int numer, denom;
public:
    fraction(): numer(0), denom(0)
    {}
    fraction(int a, int b): numer(a), denom(b)
    {}
    void getfrac()
    {
        cout << "Enter the fraction: " ;
        cin >> numer >> dummychar >> denom ;
    }
    void dispfrac()
    {
        cout << "The fraction is " << numer << dummychar << denom << endl ;
    }
    void dispfrac1()
    {
        cout << setw(8) << numer << '/' << denom ;
    }
    void addfrac(fraction, fraction);
    void subfrac(fraction, fraction);
    void mulfrac(fraction, fraction);
    void divfrac(fraction, fraction);
    void calculator();
    void lowterms();
};
//------------------------------------------------------------------------------
void fraction::addfrac(fraction a, fraction b)
{
    numer = a.numer*b.denom + a.denom*b.numer;
    denom = a.denom*b.denom;
}
//------------------------------------------------------------------------------
void fraction::subfrac(fraction a, fraction b)
{
    numer = a.numer*b.denom - a.denom*b.numer;
    denom = a.denom*b.denom;
}
//------------------------------------------------------------------------------
void fraction::mulfrac(fraction a, fraction b)
{
    numer = a.numer*b.numer;
    denom = a.denom*b.denom;
}
//------------------------------------------------------------------------------
void fraction::divfrac(fraction a, fraction b)
{
    numer = a.numer*b.denom;
    denom = a.denom*b.numer;
}
//------------------------------------------------------------------------------
void fraction::calculator()
{
    char opr; fraction fr, fr1, fr2;
    cout << "Enter the type of operation (+/-/*//): " ;
    cin >> opr ;
    fr1.getfrac(); fr2.getfrac();
    switch(opr)
    {
        case '+' : fr.addfrac(fr1, fr2); numer = fr.numer; denom = fr.denom; break;
        case '-' : fr.subfrac(fr1, fr2); numer = fr.numer; denom = fr.denom; break;
        case '*' : fr.mulfrac(fr1, fr2); numer = fr.numer; denom = fr.denom; break;
        case '/' : fr.divfrac(fr1, fr2); numer = fr.numer; denom = fr.denom; break;
    }
}
//-----------------------------------------------------------------------------------
void fraction::lowterms() // change ourself to lowest terms
{
    long tnum, tden, temp, gcd;
    tnum = labs(numer); // use non-negative copies
    tden = labs(denom); // (needs cmath)
    if(tden==0 ) // check for n/0
    { cout << "Illegal fraction: division by 0"; exit(1); }
    else if( tnum==0 ) // check for 0/n
    { numer=0; denom = 1; return; }
// this ‘while’ loop finds the gcd of tnum and tden
    while(tnum != 0)
    {
        if(tnum < tden) // ensure numerator larger
        { temp=tnum; tnum=tden; tden=temp; } // swap them
        tnum = tnum - tden; // subtract them
    }
    gcd = tden; // this is greatest common divisor
    numer = numer / gcd; // divide both num and den by gcd
    denom = denom / gcd; // to reduce frac to lowest terms
}
//-----------------------------------------------------------------------------------
int main()
{
    unsigned int a;
    cout << "Enter the integer: " ;
    cin >> a ;
    cout << setw(8) << ' ' << setfill(' ') ;
    for (int i = 1; i < a; i++)
    {
        fraction fr1(i, a); fr1.lowterms();
        fr1.dispfrac1();
    }
    for (int i = 1; i < a; i++)
    {
        cout << endl;
        fraction fr1(i,a); fr1.lowterms();
        fr1.dispfrac1();
        for (int j = 1; j < a; j++)
        {
            fraction fr2(j, a);
            fraction fr3;
            fr3.mulfrac(fr1, fr2); fr3.lowterms();
            fr3.dispfrac1();
        }
    }
    return 0;
}
