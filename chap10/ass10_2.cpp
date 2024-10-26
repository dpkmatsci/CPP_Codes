#include <iostream>
#include <cstring>
using namespace std;

class String
{
private:
    char* str;
public:
    String(char* s)
    {
        int a = strlen(s);
        str = new char[a+1];
        strcpy(str,s);
        *(str+a)='\0';
    }
    ~String()
    {
        cout << "Deleting string" << endl;
        delete[] str;
    }
    void display()
    {
        cout << str << endl;
        cout << "String length is " << strlen(str) << endl;
    }
    String upit();
};
//------------------------------------------------------
String String::upit()
{
    int len = strlen(str);
    char* Str = new char[len];
    for (int i = 0; i< len; i++)
    {
        if (static_cast<int>(*(str+i))>96 && static_cast<int>(*(str+i))<123)
        {
            *(Str+i)=static_cast<char>(static_cast<int>(*(str+i))-32);
        }
        else *(Str+i) = *(str+i);

    }
    *(Str+len) = '\0';
    return String(Str);
}
//-----------------------------------------------------------------------------
int main()
{
    String s1 = "My name is Dipak Prasad";
    s1.display();
    String s2 = s1.upit();
    s2.display();
    return 0;
}

