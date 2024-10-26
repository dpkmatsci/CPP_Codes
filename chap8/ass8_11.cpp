#include <iostream>
using namespace std;
char dummychar;

class sterling
{
private:
    long pound;
    int shilling;
    int pence;
public:
    sterling(): pound(0), shilling(0), pence(0)
    {}
    sterling (long a, int b, int c): pound(a), shilling(b), pence (c)
    {}
    sterling(double a)
    {
        pound = static_cast<long>(a);
        double shill = (static_cast<double>(a)-static_cast<double>(pound))*20;
        shilling = static_cast<int>(shill);
        pence = static_cast<int>(12*(shill-static_cast<double>(shilling)));
    }
    void getsterl()
    {
        cout << "Enter the amount of money in pound.shilling.pence: ";
        cin >> pound >> dummychar >> shilling >> dummychar >> pence;
    }
    void putsterl()
    {
        cout << '\x9c' << pound << "." << shilling << "." << pence << endl;
    }
    operator double() const
    {
        double d = static_cast<double>(pound) + static_cast<double>(shilling)/20 + static_cast<double>(pence)/240;
        return d;
    }
    sterling operator + (sterling a)
    {
        return sterling(double(sterling(pound, shilling, pence))+double(a));
    }
    sterling operator - (sterling a)
    {
        return sterling(double(sterling(pound, shilling, pence))-double(a));
    }
    sterling operator * (double a)
    {
        return sterling(double(sterling(pound, shilling, pence))*a);
    }
    sterling operator / (double a)
    {
        return sterling(double(sterling(pound, shilling, pence))/a);
    }
    double operator / (sterling a)
    {
        return (double(sterling(pound, shilling, pence))/double(a));
    }
};
//--------------------------------------------------------------------
int main()
{
    sterling a, b, c;
  //  double d=26.3;
  //  sterling e(d);
  //  e.putsterl();
    double s = 5.26;
    a.getsterl(); // b.getsterl();
  //  c = a+b; c.putsterl();
  //  c = a-b; c.putsterl();
    c = a*s; c.putsterl();
  //  c = a/s; c.putsterl();
  //  s = a*b; cout << s << endl;
  //  return 0;
}
