#include <iostream>
#include <cmath>
#include <stdlib.h>
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
    void addfrac();
    void subfrac();
    void mulfrac();
    void divfrac();
    void calculator();
    void lowterms();
};
//------------------------------------------------------------------------------
void fraction::addfrac()
{
    fraction a, b;
    a.getfrac();
    b.getfrac();
    numer = a.numer*b.denom + a.denom*b.numer;
    denom = a.denom*b.denom;
}
//------------------------------------------------------------------------------
void fraction::subfrac()
{
    fraction a, b;
    a.getfrac();
    b.getfrac();
    numer = a.numer*b.denom - a.denom*b.numer;
    denom = a.denom*b.denom;
}
//------------------------------------------------------------------------------
void fraction::mulfrac()
{
    fraction a, b;
    a.getfrac();
    b.getfrac();
    numer = a.numer*b.numer;
    denom = a.denom*b.denom;
}
//------------------------------------------------------------------------------
void fraction::divfrac()
{
    fraction a, b;
    a.getfrac();
    b.getfrac();
    numer = a.numer*b.denom;
    denom = a.denom*b.numer;
}
//------------------------------------------------------------------------------
void fraction::calculator()
{
    char opr; fraction fr;
    cout << "Enter the type of operation (+/-/*//): " ;
    cin >> opr ;
    switch(opr)
    {
        case '+' : fr.addfrac(); numer = fr.numer; denom = fr.denom; break;
        case '-' : fr.subfrac(); numer = fr.numer; denom = fr.denom; break;
        case '*' : fr.mulfrac(); numer = fr.numer; denom = fr.denom; break;
        case '/' : fr.divfrac(); numer = fr.numer; denom = fr.denom; break;
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
    fraction fr1;
    fr1.calculator();
    fr1.lowterms();
    fr1.dispfrac();
    return 0;
}
