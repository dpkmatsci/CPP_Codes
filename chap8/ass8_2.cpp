#include <iostream>
#include <cstring>
#include <stdlib.h>
using namespace std;

class strng
{
private:
    enum {maxs = 20};
    char str[maxs];
public:
    strng()
    {
        strcpy(str, ""); // no arg constructor
    }
    strng(char s[])
    {
        strcpy(str, s); // two arg constructor
    }
    void getstr()
    {
        cout << "Enter the string: ";
        cin.get(str, maxs);
    }
    void display()
    {
        cout << str << endl;
    }
    strng operator += (strng s)
    {
        if (strlen(str)+strlen(s.str) < maxs)
        {
            strcat(str, s.str);
            return(strng(str));
        }
        else
        {
            cout << "String length overflow";
            exit(1);
        }
    }
};
//------------------------------------------------------
int main()
{
    strng a = "My name is Dipak.";
    strng c = "I am from kolkata.";
    strng f; f.getstr();
    strng g;
    g.display();
    a += c;
    g = a += f;
    a.display();
    return 0;
}
