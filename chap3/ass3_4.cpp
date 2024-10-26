#include <iostream>
/* Calculator program */
using namespace std;

int main()
{
    float a, b, c;
    char op, ans = 'y' ;
    while (ans == 'y')
    {
        cout << "Enter first number, operator, second number: " ;
        cin >> a >> op >> b;
        switch(op)
        {
            case '+' : c=a+b; break;
            case '-' : c=a-b; break;
            case '*' : c=a*b; break;
            case '/' : c=a/b; break;
        }
        cout << "Answer is " << c << endl;
        cout << "Do another (y/n):" ;
        cin >> ans ;
    }
    return 0;
}
