#include <iostream>
/* Calculation of no of years of investment for desired return */
using namespace std;

int main()
{
    float a, b, c;
    int k=1;
    cout << "Enter the amount, final amount and rate of interest: " ;
    cin >> a >> b >> c;
    while (k>0)
    {
        a = a+a*c/100;
        if (b<=a)
            break;
        k++;
    }
    cout << "Required time is " << k << " Years." << endl;
    return 0;
}
