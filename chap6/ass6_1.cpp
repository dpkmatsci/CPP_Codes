#include <iostream>
using namespace std;

class Int
{
private:
    int intgr;
public:
    void getzero()
    { intgr = 0; }
    void getval()
    { cout << "Enter the integer\n" ;
      cin >> intgr; }
    void showint()
    {
        cout << "interger = " << intgr << endl;
    }
    void add_int(Int, Int);
};
//---------------------------------------------------
void Int::add_int(Int d1, Int d2)
{
    intgr = d1.intgr + d2.intgr;
}
//---------------------------------------------------
int main()
{
    Int a; a.getzero();
    Int b; b.getval();
    Int c;
    c.add_int(a, b);
    c.showint();
    return 0;
}
