#include <iostream>
using namespace std;

struct fraction
{
    int numer, denom;
};

fraction fadd(fraction, fraction);
fraction fsub(fraction, fraction);
fraction fmul(fraction, fraction);
fraction fdiv(fraction, fraction);

int main()
{
    fraction fr1, fr2, fr3; char dummychar, opr;
    cout << "Enter + for addition, - for subtraction, * for multiplication and / for division" << endl;
    cout << "Enter first fraction:" ;
    cin >> fr1.numer >> dummychar >> fr1.denom ;
    cout << "Enter operator:" ;
    cin >> opr;
    cout << "Enter second fraction: " ;
    cin >> fr2.numer >> dummychar >> fr2.denom ;
    switch(opr)
    {
        case '+' : fr3 = fadd(fr1, fr2); break;
        case '-' : fr3 = fsub(fr1, fr2); break;
        case '*' : fr3 = fmul(fr1, fr2); break;
        case '/' : fr3 = fdiv(fr1, fr2); break;
    }
    cout << "The resulting answer is " << fr3.numer << dummychar << fr3.denom ;
    return 0;
}
//---------------------------------------------------------------------------------------------------------------
fraction fadd(fraction a, fraction b)
{
    fraction c;
    c.numer = a.numer*b.denom+a.denom*b.numer ; c.denom = a.denom*b.denom;
    return c;
};
//----------------------------------------------------------------------------------------------------------------
fraction fsub(fraction a, fraction b)
{
    fraction c;
    c.numer = a.numer*b.denom-a.denom*b.numer ; c.denom = a.denom*b.denom;
    return c;
};
//------------------------------------------------------------------------------------------------------------------
fraction fmul(fraction a, fraction b)
{
    fraction c;
    c.numer = a.numer*b.numer ; c.denom = a.denom*b.denom;
    return c;
};
//-------------------------------------------------------------------------------------------------------------------
fraction fdiv(fraction a, fraction b)
{
    fraction c;
    c.numer = a.numer*b.denom ; c.denom = a.denom*b.numer;
    return c;
};
