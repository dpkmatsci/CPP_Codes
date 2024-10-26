#include <iostream>
using namespace std;

struct time
{
    unsigned int hrs, mins, secs;
};

int main()
{
    time t1;
    char dummychar;
    cout << "Enter time in format hour:min:sec :";
    cin >> t1.hrs >> dummychar >> t1.mins >> dummychar >> t1.secs ;
    long totalsecs=t1.hrs*3600+t1.mins*60+t1.secs;
    cout << "The total seconds spent is " << totalsecs << " secs" << endl;
    return 0;
}
