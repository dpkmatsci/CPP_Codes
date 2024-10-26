#include <iostream>
using namespace std;
/* Return variable by reference */

int& setx();
int x;

int main()
{
    setx() = 3;
  // x = setx();
    cout << "value of x is " << x;
    return 0;
}
//----------------------------------------
int& setx()
{
   // x=3;
    return x;
}
