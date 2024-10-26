#include <iostream>
/* Temperature conversion program */
using namespace std;

int main()
{
    int index;
    double ctemp, ftemp;
    cout << "Type 1 to convert Fahrenheit to Celsius,\n 2 to convert Celsius to Fahrenheit:" << endl;
    cin >> index ;
    if (index==1)
    {
        cout << "Enter temperature in fahrenheit:" ;
        cin >> ftemp ;
        ctemp = (ftemp-32)*5/9;
        cout << "Temp in celsius is " << ctemp << endl ;
    }
    else if (index==2)
    {
        cout << "Enter temperature in celsius:" ;
        cin >> ctemp ;
        ftemp = ctemp*1.8+32;
        cout << "Temp in fahrenheit is " << ftemp << endl ;
    }
    return 0;
}
