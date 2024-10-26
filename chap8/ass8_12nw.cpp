#include <iostream>
using namespace std;

char dummychar;
class sterling;

// This is created with routine in destination which requires getdata function in source

class bmoney
{
private:
    long double money;
public:
    bmoney():money(0)
    {}
    bmoney(long double a): money(a)
    {}
    void getmoney()
    {
        cout <<"Enter the amount of money in $: "; cin >> money;
    }
    void putmoney()
    {
        cout << "Amount in dollar is: " << money << endl;
    }
    bmoney(sterling); // 1 arg constructor
    long double getmon() {return money;}
};
class sterling
{
private:
    long pound;
    int shilling;
    int pence;
public:
    sterling(): pound(0), shilling(0), pence (0)
    {}
    sterling(long a, int b, int c): pound(a), shilling(b), pence(c)
    {}
    void getsterl()
    {
        cout << "Enter the amount of money in pound.shilling.pence: ";
        cin >> pound >> dummychar >> shilling >> dummychar >> pence;
    }
    void putsterl()
    {
        cout << pound << "." << shilling << "." << pence << endl;
    }
    sterling(bmoney); // 1 arg constructor
    long getpound() {return pound;}
    int getshill() {return shilling;}
    int getpence() {return pence;}
};
//----------------------------------------------------------------------
bmoney:: bmoney(sterling s)
{
    long pound = s.getpound();
    int shilling = s.getshill();
    int pence = s.getpence();
    double d = static_cast<double>(pound) + static_cast<double>(shilling)/20 + static_cast<double>(pence)/240;
    d *= 50;
    money = d;
}
//---------------------------------------------------------------------------
sterling:: sterling(bmoney bm)
{
    long double money = bm.getmon();
    money /=50;
    pound = money;
    double shill = (money-pound)*20;
    shilling = shill;
    pence = (shill-shilling)*12;
}
//---------------------------------------------------------------------------
int main()
{
    char ch, op;
    do
    {
        cout << "a. dollar to sterling, b. sterling to dollar ";
        cout << "Enter appropriate choice (a/b): ";
        cin >> op;
        if (op == 'a')
        {
             bmoney a;
             a.getmoney();
             sterling b = a;
             b.putsterl();
        }
        if (op == 'b')
        {
             sterling a;
             a.getsterl();
             bmoney b = a;
             b.putmoney();
        }
        cout << "Do you want to continue (y/n): ";
        cin >> ch;
    } while(ch == 'y');
    return 0;
}
