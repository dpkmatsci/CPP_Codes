#include <iostream>
using namespace std;

struct sterling
{
    unsigned int pound, shilling, pence;
};

int topence(sterling);
sterling frompence(int);
void display(sterling);
sterling addsterl(sterling, sterling);

int main()
{
     sterling st1, st2, st3; char dummychar;
     cout << "Enter amount in old British style" << endl;
     cout << "Enter first amount:" ;
     cin >> st1.pound >> dummychar >> st1.shilling >> dummychar >> st1.pence;
     cout << "Enter second amount:" ;
     cin >> st2.pound >> dummychar >> st2.shilling >> dummychar >> st2.pence;
     st3 = addsterl(st1, st2);
     display(st3);
     return 0;
}
//-------------------------------------------------------------------------------
int topence(sterling a)
{
    return 12*(20*a.pound+a.shilling)+a.pence;
}
//-------------------------------------------------------------------------------
void display(sterling a)
{
    cout << "The final amount is " << a.pound << '.' << a.shilling << '.' << a.pence ;
}
//----------------------------------------------------------------------------------
sterling addsterl(sterling a, sterling b)
{
    int c = topence(a) + topence(b);
    return frompence(c);
}
//-----------------------------------------------------------------------------------
sterling frompence(int a)
{
    sterling b;
    b.pound = a/240;
    b.shilling = (a-240*b.pound)/12;
    b.pence = (a-240*b.pound-12*b.shilling);
    return b;
}
