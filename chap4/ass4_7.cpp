#include <iostream>
#include <iomanip>
using namespace std;

struct date
{
    unsigned int day, month, year;
};
enum etype {laborer, secretary, manager, accountant, executive, researcher};

struct employ
{
    unsigned int emplno;
    float compenst;
    etype et;
    date dt;
};

int main()
{
    char dummychar, initials;
    employ e1;
    cout << "Enter employee number of first employee and their compensation separated by :" ;
    cin >> e1.emplno >> dummychar >> e1.compenst;
    cout << "Enter first date of employment in order of day/month/year:" ;
    cin >> e1.dt.day >> dummychar >> e1.dt.month >> dummychar >> e1.dt.year ;
    cout << "Enter employee type (first letter only) laborer, secretary, manager, accountant, executive, researcher):";
    cin >> initials;
    switch(initials)
    {
        case 'l' : e1.et = laborer ; break;
        case 's' : e1.et = secretary ; break;
        case 'm' : e1.et = manager ; break;
        case 'a' : e1.et = accountant ; break;
        case 'e' : e1.et = executive ; break;
        case 'r' : e1.et = researcher ; break;
    }
    cout << setw(16) << "Employee number: " << setw(8) << e1.emplno << endl;
    cout << setw(16) << "Employee compensation: " << setw(8) << e1.compenst << endl;
    cout << "The first date of employment is " << e1.dt.day << dummychar << e1.dt.month << dummychar << e1.dt.year << endl;
    switch(e1.et)
    {
        case 0 : cout << "The employee type is laborer" << endl; break;
        case 1 : cout << "The employee type is secretary" << endl; break;
        case 2 : cout << "The employee type is manager" << endl; break;
        case 3 : cout << "The employee type is accountant" << endl; break;
        case 4 : cout << "The employee type is executive" << endl; break;
        case 5 : cout << "The employee type is researcher" << endl; break;
    }
    //cout << dummychar;
    return 0;
}

