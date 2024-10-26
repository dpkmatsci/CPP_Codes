#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    const int maxs = 17;
    char str[maxs] = "My name is Dipak" ;
    // cout << "Enter the string: " ;
    // cin >> str ;
   // cin.get(str,maxs);
    cout << "The string entered is " << str << endl;
   int a = strlen(str);
   cout << "The length of string is " << a << endl;
    return 0;
}
