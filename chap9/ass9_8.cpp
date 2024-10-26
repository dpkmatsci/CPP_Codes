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
class PString2: public String
{
public:
    PString2():String()
    {}
    PString2(char s[]);
    void leftstr(PString2 s, int n)
    {
        if (n>strlen(s.str))
            strcpy(str,s.str);
        else
            for (int i=0;i<n;i++)
                str[i]=s.str[i];
            str[n] = 0;
       // PString2 lstr(str);
       // return lstr;
    }
    void rightstr(PString2 s, int n)
    {
        if (n>strlen(s.str))
            strcpy(str,s.str);
        else
            for (int i=0;i<n;i++)
                str[i]=s.str[strlen(s.str)-n+i];
            str[n] = 0;
       // PString2 rstr(str);
       // return rstr;
    }
    void midstr(PString2 s, int c, int n)
    {
        if (n>strlen(s.str))
            strcpy(str,s.str);
        else
            int a = strlen(s.str);
            for (int i=0;i<n;i++)
                str[i]=s.str[c+i];
            str[n] = 0;
      //  PString2 mstr(str);
      //  return mstr;
    }
};
//-------------------------------------------------
PString2::PString2(char s[])
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
//--------------------------------------------------
int main()
{
    PString2 s1, s2;
    char zstr[] = "This string will not exceed";
    cout << strlen(zstr) << endl;
    s1 = zstr;
    s1.display();
    char xstr[] = "This string will surely exceed the width of the screen, which is what the SZ constant represents";
    cout << strlen(xstr) << endl;
    s2 = xstr;
    s2.display();
    PString2 s3, s4, s5;
    s3.leftstr(s2, 18);
    s3.display();
    s4.rightstr(s2, 20);
    s4.display();
    s5.midstr(s2, 5, 18);
    s5.display();
    return 0;
}
