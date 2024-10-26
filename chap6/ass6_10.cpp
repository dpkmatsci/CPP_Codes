#include <iostream>
using namespace std;

class angle
{
private:
    int degree;
    float mins;
    char direction;
public:
    void getangl()
    {
        cout << "degree, mins and direction of angle: "; cin >> degree >> mins >> direction;
    }
    void showangl()
    {
        cout << degree << '\xF8' << mins << '\'' << direction;
    }
};

class ship
{
private:
    static int contr;
    int serial;
    angle latitude, longitude;
public:
    ship()
    {
        serial = ++contr;
    }
    void getpos()
    {
        cout <<"For ship with serial no. " << serial << endl;
        cout << "Enter latitude in terms of "; latitude.getangl();
        cout << "Enter longitude in terms of "; longitude.getangl();
    }
    void showpos()
    {
        cout << "\n The ship with serial no. " << serial << " is at latitude ";
        latitude.showangl(); cout << " and at longitude "; longitude.showangl();
    }
};
//--------------------------------------------------------------------------------------------------
int ship::contr = 0;
//--------------------------------------------------------------------------------------------------
int main()
{
    ship a, b, c;
    a.getpos(); b.getpos(); c.getpos();
    a.showpos(); b.showpos(); c.showpos();
    return 0;
}
