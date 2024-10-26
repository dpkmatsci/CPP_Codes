#include <iostream>
/* Convert decimal pound to old monetary system */
using namespace std;

int main()
{
    float a;
    cout << "Enter decimal pounds: " ;
    cin >> a;
    int pounds = static_cast<int>(a);
    float decpnds = a - pounds;
    float shll=20*decpnds ;
    int shill = static_cast<int>(shll);
    int pence = 12* (shll-shill);
    cout << "Equivalent in old notation : " << pounds <<'.'<< shill << '.' << pence << endl ;
    return 0;
}
