#include <iostream>
#include <iomanip>
using namespace std;

float topence(int, int, float);
void frompence(float, int&, int&, float&);

int main()
{
    int a1, a2, b1, b2, c1, c2;
    float c, a3, b3, c3, f;
    char opr, dummychar;
    cout << "Enter amount in old British style" << endl;
    cout << "Enter a for addition, s for subtraction and m for multiplication" << endl;
    cout << "What is the operation to be performed (a/s/m):" ;
    cin >> opr;
    if (opr=='a' || opr=='s')
    {
        cout << "Enter first amount:" ;
        cin >> a1 >> dummychar >> a2 >> dummychar >> a3;
        cout << "Enter second amount:" ;
        cin >> b1 >> dummychar >> b2 >> dummychar >> b3;
        switch(opr)
        {
            case 'a' : c = topence(a1, a2, a3)+topence(b1, b2, b3); break;
            case 's' : c = topence(a1, a2, a3)-topence(b1, b2, b3); break;
        }
        frompence(c, c1, c2, c3);
        cout << "The final amount is " << '\x9c' << c1 << dummychar << c2 << dummychar << setprecision(2) << c3 << endl;
    }
    else if(opr=='m')
        {
            cout << "Enter amount:" ;
            cin >> a1 >> dummychar >> a2 >> dummychar >> a3;
            cout << "Enter the number to be multiplied:" ;
            cin >> f;
            c = f*topence(a1, a2, a3);
            frompence(c, c1, c2, c3);
            cout << "The final amount is " << '\x9c' << c1 << dummychar << c2 << dummychar << setprecision(2) << c3 << endl;
        }
    return 0;
}
//----------------------------------------------------------------------------------------------------------------------------
float topence(int a, int b, float c)
{
    return 12*(20*a+b)+c;
}
//----------------------------------------------------------------
void frompence(float a, int& b, int& c, float& d)
{
    b=static_cast<int>(a)/240;
    float shill = (a-240*b);
    c=static_cast<int>(shill)/12;
    d=(shill-12*c);
}
