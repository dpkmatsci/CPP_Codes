#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int yr = 1990, yr1=135, yr2 = 7290, yr3 = 11300, yr4 = 16200 ;

    cout <<   yr << setw(8) << yr1 << endl
         << ++yr << setw(8) << yr2 << endl
        << ++yr  << setw(8) << yr3 << endl
        << ++yr  << setw(8) << yr4 << endl;
    return 0;
}