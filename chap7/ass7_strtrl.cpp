#include <iostream>
#include <string>
using namespace std;

int main()
{
    float a, b ;
    cout <<"Enter the money: " << endl;
    cin >> a;
    int c= static_cast<int>(a);
    b = a-c;
    string fracstr=to_string(b);
    fracstr = fracstr.erase(0,1);
    string intstr = to_string(c);
    string tot = intstr+fracstr;
    cout << tot << endl;
    cout << intstr << endl;
    cout << fracstr << endl;
    return 0;
}

