#include<iostream>
using namespace std;

class time
{
private:
    int hr, mins, sec;
public:
    time(): hr(0), mins(0), sec(0)
    { }
    time(int a, int b, int c): hr(a), mins(b), sec(c)
    { }
    void display()
    {
        cout << "Time is " ;
        if  (hr<10) cout << '0';
        cout << hr << ':';
        if (mins<10) cout << '0';
        cout  << mins << ':';
        if (sec<10) cout << '0';
        cout << sec << endl;
    }
    void add_time(time, time);
};
//---------------------------------------------------------------------------
void time::add_time(time a, time b)
{
    hr = a.hr + b.hr;
    mins = a.mins + b.mins;
    sec = a.sec + b.sec;
    if ( sec >= 60 )
        sec -= 60; mins++;
    if ( mins >= 60 )
        mins -= 60; hr++;
}
//---------------------------------------------------------------------------
int main()
{
    time a;
    time b(5, 20, 25);
    time c(4, 45, 55);
    a.add_time(b, c);
    a.display();
    return 0;
}
