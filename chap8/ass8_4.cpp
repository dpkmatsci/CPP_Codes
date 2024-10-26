#include <iostream>
#include <stdlib.h>
using namespace std;

class Int
{
private:
    int a;
public:
    Int(): a(0)
    {}
    Int(int b): a(b)
    {}
    void showdata()
    {
        cout << a;
    }
    Int check(long double c)
    {
        if (c>=-2147483647.00L && c<=2147483648.00L)
        {
            return(Int(c));
        }
        else
        {
            cout << "Value out of range of Int" ;
            exit(1);
        }
    }
    Int operator + (Int b)
    {
        return check(a+b.a);
    }
    Int operator - (Int b)
    {
        return check(a-b.a);
    }
    Int operator * (Int b)
    {
        return check(a*b.a);
    }
    Int operator / (Int b)
    {
        return check(a/b.a);
    }
};
//---------------------------------------------------------
int main()
{
    Int a(5);
    Int b(15);
    Int c = a-b;
    c.showdata();
    return 0;
}

