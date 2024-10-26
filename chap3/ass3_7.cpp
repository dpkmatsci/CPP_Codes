#include <iostream>
/* Calculation of final amount from compound interest */
using namespace std;

int main()
{
    float a, b;
    int yr;
    cout << "Enter initial amount:" ;
    cin >> a;
    cout << "Enter no of years:" ;
    cin >> yr ;
    cout << "Enter rate of interest:" ;
    cin >> b;
    for (int i=1; i<=yr; i++)
    {
        a = a+a*b/100;
    }
    cout << "The final amount after " << yr << " years is " << a << " Rs." << endl;
    return 0;
}
