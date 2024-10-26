#include <iostream>
/* Factorial program */
using namespace std;

int main()
{
    int a, mult;
    cout << "Enter the number: " ;
    cin >> a ;
    while (a !=0)
    {
        mult = 1;
        for (int j=a;j>=1;j--)
        {
            mult = mult*j;
        }
        cout << "Factorial is " << mult << endl;
        cout << "Enter the number: " ;
        cin >> a ;
    }
    return 0;
}
