#include <iostream>
using namespace std;
float circarea(float);  // function decleration
const float pi = 3.14159;
int main()
{
    float r, ar;
    cout << "Enter a radius: " ;
    cin >> r ;
    ar = circarea(r);
    cout << "Area of circle is: " << ar << endl;
    return 0;
}
//----------------------------------------------------
float circarea(float d)
{
    return pi*d*d;
}

