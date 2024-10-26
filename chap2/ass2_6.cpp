#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float a;
    cout << "Enter the amount in us dollars \n" ;
    cin >> a ;
    cout << setw(16) <<"Currency" << setw(16) << "Amount" << endl
         << setw(16) << "Pound" << setw(16) << a/1.487 << endl
         << setw(16) << "Franc" << setw(16) << a/0.172 << endl
         << setw(16) << "Deutschmark" << setw(16) << a/0.584 << endl
         << setw(16) << "Yen" << setw(16) << a/0.00955 << endl;
    return 0;
}
