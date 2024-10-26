#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void intfrc(float, float&, float&);

int main()
{
    float tot, intp, fracp;
    cout << "Enter the number: ";
    cin >> tot;
    intfrc(tot, intp, fracp);
    cout << "The integer part is " << intp << " and fractional part is " << setprecision(4) << fracp << endl;
    return 0;
}
//-----------------------------------------------------------------------------------------
void intfrc(float a, float& b, float& c)
{
    long temp = static_cast<long>(a);
    b = static_cast<float>(temp);
    c = a-b;
}
