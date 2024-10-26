#include <iostream>
using namespace std;

char dummychar;
class time
{
private:
    int hr, mins, secs;
public:
    time(): hr(0), mins(0), secs(0)
    {}
    time (int a, int b, int c): hr(a), mins(b), secs(c)
    {}
    void gettime()
    {
        cout << "Enter time in hr, mins and secs in format hr:mins:secs : " ;
        cin >> hr >> dummychar >> mins >> dummychar>> secs;
    }
    void showtime()
    {
        if (hr < 10 ) cout << "0" ;
        cout << hr << dummychar ;
        if (mins < 10 ) cout << "0" ;
        cout << mins << dummychar;
        if  (secs < 10 ) cout << "0";
        cout << secs;
    }
    time operator + (time) const;
};
//----------------------------------------------------------------------------
time time::operator + (time a) const
{
    time tmp;
    tmp.hr = hr + a.hr;
    tmp.mins = mins + a.mins;
    tmp.secs = secs + a.secs;
    if (tmp.secs >= 60)
    {
        tmp.secs -=60;
        tmp.mins++;
    }
    if (tmp.mins >= 60)
    {
        tmp.mins -=60;
        tmp.hr++;
    }
    return tmp;
}
int main()
{
    time a(2,45,30);
    time b, c;
    b.gettime();
    c = a + b;
    c.showtime();
    return 0;
}
