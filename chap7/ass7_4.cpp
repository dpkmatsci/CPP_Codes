#include <iostream>
using namespace std;

int main()
{
    int mx, temp, indx;
    cout << "Enter the no of integers: " ;
    cin >> mx;
    int b[mx];
    for (int i=0; i< mx; i++)
    {
        cout << "Enter the integer: "; cin >> b[i];
    }
    temp = b[0], indx = 1;
    for (int i=1; i<mx; i++)
    {
        if (temp < b[i])
        {
            temp = b[i];
            indx = i+1;
        }
    }
    cout << "The largest no is " << temp << " at index of " << indx;
    return 0;
}
