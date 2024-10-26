#include <iostream>
/* sum of fractions*/
using namespace std;
int main()
{
    char dummychar;
    int a, b , c, d;
    cout << "Enter first fraction\n" ;
    cin >> a >> dummychar >> b;
    cout << "Enter second fraction\n" ;
    cin >> c >> dummychar >> d;
    cout << "Sum = " << a*d+b*c << dummychar << b*d << endl;
    return 0;
}
