#include <iostream>
using namespace std;

struct fraction
{
    int numer, denom;
};

int main()
{
    fraction fr1, fr2, fr3;
    cout << "Enter + for addition, - for subtraction, * for multiplication and / for division" << endl;
    char dummychar, opr, ans = 'y';
    while (ans=='y')
    {
        cout << "Enter first fraction:" ;
        cin >> fr1.numer >> dummychar >> fr1.denom ;
        cout << "Enter operator:" ;
        cin >> opr;
        cout << "Enter second fraction: " ;
        cin >> fr2.numer >> dummychar >> fr2.denom ;
        switch(opr)
        {
            case '+' : fr3.numer = fr1.numer*fr2.denom+fr1.denom*fr2.numer ; fr3.denom = fr1.denom*fr2.denom; break;
            case '-' : fr3.numer = fr1.numer*fr2.denom-fr1.denom*fr2.numer ; fr3.denom = fr1.denom*fr2.denom; break;
            case '*' : fr3.numer = fr1.numer*fr2.numer ; fr3.denom = fr1.denom*fr2.denom; break;
            case '/' : fr3.numer = fr1.numer*fr2.denom ; fr3.denom = fr1.denom*fr2.numer; break;
        }
        cout << " The final result is " << fr3.numer << dummychar << fr3.denom << endl;
        cout << " Do you want to perform another calculation (y/n):" ;
        cin >> ans;
    }
    return 0;
}
