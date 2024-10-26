#include <iostream>
using namespace std;

class angle
{
private:
    int degree;
    float mins;
    char direction;
public:
    angle(int a, float b, char ch): degree(a), mins(b), direction(ch)
    { }
    void getangl()
    {
        cout << "Enter degree, mins and direction of angle: "; cin >> degree >> mins >> direction;
    }
    void showangl()
    {
        cout << "The angle is " << degree << '\xF8' << mins << '\'' << direction << endl;
    }
};
//-------------------------------------------------------------------------------------------------------
int main()
{
    angle a(20, 47, 'E') ;
    a.showangl();
    a.getangl(); a.showangl();
    return 0;
}
