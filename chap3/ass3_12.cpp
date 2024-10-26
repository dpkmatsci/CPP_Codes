#include <iostream>
/* Calculator for fractions */
using namespace std;

int main()
{
    float a, b, c, d, fnl;
    char dummychar, opr, ans='y';
    while (ans=='y')
    {
        cout << "Enter mathematical expression: " ;
        cin >> a >> dummychar >> b >> opr >> c >> dummychar >> d;
        switch(opr)
        {
            case '+' : fnl = (a*d+b*c)/(b*d); break;
            case '-' : fnl =  (a*d-b*c)/(b*d); break;
            case '*' : fnl = (a*c)/(b*d); break;
            case '/' : fnl = (a*d)/(b*c); break;
        }
        cout << "Answer is " << fnl << endl;
        cout << "Do another (y/n):" ;
        cin >> ans;
    }
    return 0;
}
