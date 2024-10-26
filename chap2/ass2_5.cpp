#include <iostream>
#include <ctype.h>
using namespace std;

int main()
{
    char a;
    cout << "Enter the character\n" ;
    cin >> a ;
    bool b = islower(a);
    cout << b ;
    return 0;
}
