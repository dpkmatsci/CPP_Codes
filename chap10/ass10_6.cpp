#include <iostream>
#include <cstring>
using namespace std;

int compstr(char*, char*);
char* takestr(char*);
int main()
{
    char a[100], b[100];
    cout << "Enter first string: ";
    cin.get(a,100); cin.ignore();
    char* c=takestr(a); delete[] a;
    cout << "Enter second string: ";
    cin.get(b,100); cin.ignore();
    char* d=takestr(b); delete[] b;
    cout << compstr(c,d) << endl;
    return 0;
}
//------------------------------------------
char* takestr(char* c)
{
    int i=strlen(c);
    char* tmp;
    tmp = new char[i+1];
    strcpy(tmp, c);
    return tmp;
}
//-----------------------------------------
int compstr(char* a, char* b)
{
    int i;
    do
    {
        i=static_cast<int>(*a++)-static_cast<int>(*b++);
        if (i!=0)
            break;
    } while((*a!='\0') && (*b!='\0'));
    if (i==0)
    {
       i=static_cast<int>(*a)-static_cast<int>(*b);
    }
    if (i>0)
    {
        i=1;
    }
    else if (i<0)
    {
        i=-1;
    }
    return i;
}
