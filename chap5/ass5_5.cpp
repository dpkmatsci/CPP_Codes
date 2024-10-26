#include <iostream>
using namespace std;

long hm_to_sec(int, int, int);

int main()
{
    int a, b, c;
    char dummychar;
    cout << "Enter time in format hr:min:sec " ;
    cin >> a >> dummychar >> b >> dummychar >> c;
    long d = hm_to_sec(a, b, c);
    cout << "Total second is " << d << endl;
    return 0;
}
//-----------------------------------------------------
long hm_to_sec(int r, int s, int t)
{
    return 3600*r+60*s+t;
}
