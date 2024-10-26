#include <iostream>
using namespace std;

void timecall();
int m=1;
int main()
{
    unsigned int i;
    cout << "Enter the no. of times: " ;
    cin >> i ;
    for (int j=1; j<=i;j++)
        timecall();
    return 0;
}
//--------------------------------------------
void timecall()
{
    cout << "I have been called " << m << " times.\n" ;
    m++;
}
