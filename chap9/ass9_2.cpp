#include <iostream>
#include <cstring>
#include <string>
using namespace std;

class String
{
protected:
    enum {sz = 80};
    char str[sz];
public:
    String() // no arg constructor
    {
        str[0] = 0;
    }
    String(char s[]) // one arg constructor
    {
        strcpy(str,s);
    }
    void display() const
    {
        cout << str << endl;
    }
    operator char*()
    {
        return str;
    }
};
class PString: public String
{
public:
    PString():String()
    {}
    PString(char s[]);
};
//-------------------------------------------------
PString::PString(char s[])
    {
       if (strlen(s)>sz-1)
          {
            for (int i=0;i<sz-1;i++)
                str[i]=s[i];
            str[sz-1] = 0;
           }
        else  strcpy(str,s);
    };
//--------------------------------------------------
int main()
{
    PString s1, s2;
    char zstr[] = "This string will not exceed";
    cout << strlen(zstr) << endl;
    s1 = zstr;
    s1.display();
    char xstr[] = "This string will surely exceed the width of the screen, which is what the SZ constant represents";
    cout << strlen(xstr) << endl;
    s2 = xstr;
    s2.display();
    return 0;
}
