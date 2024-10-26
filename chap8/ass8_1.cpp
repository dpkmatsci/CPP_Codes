#include <iostream>
using namespace std;

class dist
{
private:
    int feet;
    float inches;
public:
    dist(): feet(0), inches(0) // No arg constructor
    { }
    dist(int a, float b): feet(a), inches(b) // two arg constructor
    { }
    void getdata()
    {
        cout << "Enter feet: "; cin >> feet ;
        cout << "Enter inches: "; cin >> inches;
    }
    void display()
    {
        cout << feet << '\"' << " & " << inches << '\'' << endl;
    }
    dist operator - (dist) const;
};
//-----------------------------------------------------------------
dist dist::operator - (dist d) const
{
    float fnl = feet*12+inches-12*d.feet-d.inches;
    int f = fnl/12;
    float i = fnl-12*f;
    return dist(f,i);
}
//-----------------------------------------------------------------
int main()
{
    dist a(10,6);
    dist b, c;
    b.getdata();
    c=a-b;
    cout << "Final distance is: ";
    c.display();
    return 0;
}
