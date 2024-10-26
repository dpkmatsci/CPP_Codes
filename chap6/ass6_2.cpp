#include <iostream>
#include <conio.h>
using namespace std;

const char ESC = 27;
class tollbooth
{
private:
    unsigned int nocar;
    double money;
public:
    tollbooth(): nocar(0), money(0.0) // constructor
    { }
    void payingcar()
    {
      nocar++;
      money += 0.50;
    }
    void nopaycar()
    {
        nocar++;
    }
    void display() const
    {
        cout << "\nTotal no of car passed is " << nocar << endl;
        cout << "Total money collected is " << money << " cents" << endl ;
    }
};
//----------------------------------------------------------------
int main()
{
    tollbooth a;
    char ch;
    cout <<" Enter 0 for non paying car, 1 for paying car, and escape to exit" << endl;
    while (ch != ESC)
    {
        ch = getche();
        if (ch=='0')
            a.nopaycar();
        if (ch=='1')
            a.payingcar();
    }
    a.display();
    return 0;
}
