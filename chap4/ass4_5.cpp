#include <iostream>
using namespace std;

struct date
{
    unsigned int day, month, year;
};

int main()
{
    date dt1;
    char dummychar;
    cout << "Enter date in order of day/month/year:" ;
    cin >> dt1.day >> dummychar >> dt1.month >> dummychar >> dt1.year ;
    cout << "The date entered is " << dt1.day << dummychar << dt1.month << dummychar << dt1.year << endl;
    return 0;
}
