#include <iostream>
using namespace std;

struct time
{
    int hr, mins, sec;
};

void swap(time&, time&);

int main()
{
    time t1, t2;
    char dummychar;
    cout << "Enter first time in terms of hours:mins:secs :" ;
    cin >> t1.hr >> dummychar >> t1.mins >> dummychar >> t1.sec ;
    cout << "Enter second time in terms of hours:mins:secs :" ;
    cin >> t2.hr >> dummychar >> t2.mins >> dummychar >> t2.sec ;
    swap(t1, t2);
    cout << "The first time is " << t1.hr << dummychar << t1.mins << dummychar << t1.sec << endl;
    cout << "The second time is " << t2.hr << dummychar << t2.mins << dummychar << t2.sec << endl;
    return 0;
}
//-----------------------------------------------------------------------------------------------------
void swap(time& a, time& b)
{
    b.hr=a.hr+b.hr;
    a.hr = b.hr - a.hr;
    b.hr = b.hr - a.hr;
    b.mins=a.mins+b.mins;
    a.mins = b.mins - a.mins;
    b.mins = b.mins - a.mins;
    b.sec=a.sec+b.sec;
    a.sec = b.sec - a.sec;
    b.sec = b.sec - a.sec;
}
