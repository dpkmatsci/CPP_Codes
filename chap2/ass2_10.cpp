#include <iostream>
#include <iomanip>
/* Convert old british monetary system to modern decimal pound system*/
using namespace std;

int main()
{
    double a, b, c;
    cout << "Enter pounds: " ;
    cin >> a ;
    cout << "Enter shillings: " ;
    cin >> b ;
    cout << "Enter pence: " ;
    cin >> c ;
    double d = a+b/20+c/240;
    cout << setprecision(3);
    cout << "Decimal pounds = " <<'\x9c' << d << endl;
    return 0;
}
