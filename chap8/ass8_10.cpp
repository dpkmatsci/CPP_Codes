#include <iostream>
#include <cmath>
using namespace std;
const double pi = 2*acos(0.0);
const char deg = 176;
class polar
{
private:
    double rad, degree;
public:
    polar(): rad(0), degree(0)
    {}
    polar(double a, double b): rad(a), degree(b)
    {}
    void getdata()
    {
        cout << "Enter polar coordinates in order of radius (units) and angle (degree): ";
        cin >> rad >> degree;
    }
    void display()
    {
        cout << "radius is: " << rad << " angle is: " << degree << "°"<< endl;
    }
    polar operator + (polar b)
    {
        double xcoord = rad*cos(degree*pi/180)+b.rad*cos(b.degree*pi/180);
        double ycoord = rad*sin(degree*pi/180)+b.rad*sin(b.degree*pi/180);
        double rd = pow(pow(xcoord,2)+pow(ycoord,2),0.5);
        double tht;
        if (ycoord>=0 && xcoord>= 0 ) tht = asin(ycoord/rd)*180/pi;
        if (ycoord>=0 && xcoord< 0 )  tht = 180-asin(ycoord/rd)*180/pi;
        if (ycoord<0 && xcoord< 0 )   tht = asin(-ycoord/rd)*180/pi+180;
        if (ycoord<0 && xcoord>= 0 )  tht = 360-asin(-ycoord/rd)*180/pi;
        return polar(rd,tht);
    }
};
//------------------------------------------------------------------------------
int main()
{
    polar a(5,45);
    polar b, c;
    b.getdata();
    c = a+b;
    c.display();
    return 0;
}
