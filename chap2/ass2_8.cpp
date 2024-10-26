#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
   char a;
   int b = 2425785;
   cout << "Enter a character\n" ;
   cin >> a;
   cout << "Portcity" << setw(15) << setfill(a) << b << endl;
   return 0;
}
