#include <iostream>
using namespace std;

struct time
{
    int hr, mins, sec;
};

long time_to_sec(time);
time sec_to_time(long);

int main()
{
    time a, b, c;
    char dummychar;
    cout << "Enter time in format hr:min:sec \n " ;
    cout << "Enter first time " ;
    cin >> a.hr >> dummychar >> a.mins >> dummychar >> a.sec;
    cout << "Enter second time " ;
    cin >> b.hr >> dummychar >> b.mins >> dummychar >> b.sec ;
    long d=time_to_sec(a) + time_to_sec(b);
    c = sec_to_time(d);
    cout << "Total sum is " << c.hr << dummychar << c.mins << dummychar << c.sec << endl;
    return 0;
}
//-----------------------------------------------------------------------------------------------
long time_to_sec(time s)
{
    return 3600*s.hr+60*s.mins+s.sec;
}
//---------------------------------------------------------------------------------
time sec_to_time(long d)
{
    time s;
    s.hr = d/3600;
    s.mins = (d-s.hr*3600)/60;
    s.sec = (d-s.hr*3600-s.mins*60);
    return s;
}
