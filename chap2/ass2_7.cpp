#include <iostream>
using namespace std;

int main()
{
    float ctmp, ftmp;
    cout << "Enter the temperature in celsius\n" ;
    cin >> ctmp;
    ftmp = ctmp*1.8+32;
    cout << "Temperature in fahrenheit is " << ftmp << endl ;
    return 0;
}
