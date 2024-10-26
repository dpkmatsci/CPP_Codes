#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;

int main()
{
    char ch = 'a' ;
    int k=0, sum=0;
    cout << "Enter a Number:" ;
    while (k<6)
    {
        ch = getche();
        if (ch == '\r')
        {
            break;
        }
        int d = ch - '0';
        sum = 10*sum+d;
        k++;
    }
    cout << "\n Number is " << sum << endl;
    return 0;
}
