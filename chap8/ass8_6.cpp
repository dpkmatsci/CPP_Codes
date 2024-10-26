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
        cout << secs << endl;
    }
    time operator + (time) const;
    time operator - (time) const;
    time operator * (float) const;
    time operator ++()
    {
        secs++;
        if (secs >= 60)
        {
            secs -=60;
            mins++;
        }
        if (mins >= 60)
        {
            mins -=60;
            hr++;
        }
        return time(hr,mins,secs);
    }
    time operator ++(int)
    {
        time dupli(hr,mins,secs);
        secs++;
        if (secs >= 60)
        {
            secs -=60;
            mins++;
        }
        if (mins >= 60)
        {
            mins -=60;
            hr++;
        }
        return dupli;
    }
    time operator --()
    {
        int tot = 3600*hr+60*mins+secs;
        --tot;
        hr = tot/3600;
        mins = (tot-hr*3600)/60;
        secs = (tot-hr*3600-60*mins);
        return time(hr,mins,secs);
    }
    time operator --(int)
    {
        time dupli(hr,mins,secs);
        int tot = 3600*hr+60*mins+secs;
        --tot;
        hr = tot/3600;
        mins = (tot-hr*3600)/60;
        secs = (tot-hr*3600-60*mins);
        return dupli;
    }
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
time time::operator - (time a) const
{
    int tot = 3600*hr+60*mins+secs-3600*a.hr-60*a.mins-a.secs;
    int cr = tot/3600;
    int cins = (tot-3600*cr)/60;
    int cecs = (tot-3600*cr-60*cins);
    return time(cr,cins,cecs);
}
time time::operator * (float a) const
{
    int tot = a*(3600*hr+60*mins+secs);
    int cr = tot/3600;
    int cins = (tot-3600*cr)/60;
    int cecs = (tot-3600*cr-60*cins);
    return time(cr,cins,cecs);
}
//-------------------------------------------------------------------
int main()
{
    time a(2,45,30);
    time b, c, d;
    b.gettime();
    c = a - b;
    c.showtime();
    d=c*3.5; d.showtime();
  //  (c++).showtime();
  //  c.showtime();
  //  (c--).showtime();
  //  c.showtime();
    return 0;
}
