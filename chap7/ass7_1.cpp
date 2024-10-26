#include <iostream>
#include <cstring>
using namespace std;

void reversit(char[]) ;

int main()
{
    const int maxs = 100;
    char str[maxs];
    cout << "Enter the string: " ;
    cin.get(str,maxs);
    cout << "The string entered is " << str << endl;
    reversit(str);
    cout << "After reversing string is " << str << endl;
    return 0;
}
//-----------------------------------------------------------
void reversit(char a[])
{
    int j, len=strlen(a);
    char temp;
    if (len%2 == 0)
        j=len/2 ;
    else j = (len/2)+1;
    for (int i=0;i<j;i++)
    {
        temp = a[i];
        a[i] = a[len-1-i];
        a[len-1-i] = temp;
    }
    a[len] = '\0';
}
