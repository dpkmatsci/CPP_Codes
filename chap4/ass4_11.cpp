#include <iostream>
using namespace std;

struct time
{
    int hr, mins, sec;
};

int main()
{
    time a, b, c;
    int totalsec;
    char dummychar;
    cout << "Enter time in format hr:min:sec" << endl;
    cout << "Enter first time: " ;
    cin >> a.hr >> dummychar >> a.mins >> dummychar >> a.sec;
    cout << "Enter second time: " ;
    cin >> b.hr >> dummychar >> b.mins >> dummychar >> b.sec ;
    totalsec = (a.hr+b.hr)*3600 +(a.mins*60+b.mins*60+a.sec+b.sec);
    c.hr = totalsec/3600;
    c.mins = (totalsec-c.hr*3600)/60;
    c.sec = (totalsec-c.hr*3600-c.mins*60);
    cout << "Total time is " << c.hr << dummychar << c.mins << dummychar << c.sec;
    return 0;
}
