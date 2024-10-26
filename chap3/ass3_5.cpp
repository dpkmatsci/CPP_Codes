#include <iostream>
/* program to print triangular X */
using namespace std;

int main()
{
    int n;
    cout << "Enter the no of lines: ";
    cin >> n;
    for (int i=1; i<=n; i++)
    {
        for (int j=1; j<=2*n-1; j++)
        {
            if (j<n-i+1 || j>n+i-1)
            {
                cout << ' ';
            }
            else cout << 'X';
        }
        cout << '\n';
    }
    return 0;
}
