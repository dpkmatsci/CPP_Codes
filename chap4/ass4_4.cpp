#include <iostream>
#include <iomanip>
using namespace std;

struct employ
{
    unsigned int emplno;
    float compenst;
};

int main()
{
    char dummychar;
    employ e1, e2, e3;
    //employ e1 = {200, 15000};
    //employ e2 = {201, 15000};
    //employ e3 = {202, 15000};
    cout << "Enter employee number of first employee and their compensation separated by :" ;
    cin >> e1.emplno >> dummychar >> e1.compenst;
    cout << "Enter employee number of second employee and their compensation separated by :" ;
    cin >> e2.emplno >> dummychar >> e2.compenst;
    cout << "Enter employee number of third employee and their compensation separated by :" ;
    cin >> e3.emplno >> dummychar >> e3.compenst;
    cout << setw(16) << "Employee number: " << setw(8) << e1.emplno << endl;
    cout << setw(16) << "Employee compensation: " << setw(8) << e1.compenst << endl;
    //cout << dummychar;
    cout << setw(16) << "Employee number: " << setw(8) << e2.emplno << endl;
    cout << setw(16) << "Employee compensation" << setw(8) << e2.compenst << endl;
    cout << setw(16) << "Employee number: " << setw(8) << e3.emplno << endl;
    cout << setw(16) << "Employee compensation" << setw(8) << e3.compenst << endl;
    return 0;
}
