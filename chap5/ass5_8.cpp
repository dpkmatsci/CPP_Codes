#include <iostream>
using namespace std;

void swap(float&, float&);

int main()
{
    float a, b;
    cout << "Enter two numbers: " ;
    cin >> a >> b;
    swap(a, b);
    cout << "The numbers are " << a << " and " << b;
    return 0;
}
//-----------------------------------------------------
void swap(float& s, float& t)
{
    float temp = t;
    t = s;
    s = temp;
}
