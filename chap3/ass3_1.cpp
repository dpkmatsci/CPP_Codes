#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a, k=0;
    cout << "Enter a number:" << endl;
    cin >> a ;
    for (int i=1; i<=20; i++)
    {
        for (int j=1; j<=10; j++)
        {
            cout << setw(5) << a* ++k ;
        }
        cout << '\n' ;
    }
    return 0;
}
