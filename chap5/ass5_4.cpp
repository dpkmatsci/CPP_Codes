#include <iostream>
using namespace std;

struct distan
{
    int ft;
    float inch;
};

  void larger(distan& ,distan);

int main()
{
    distan d1, d2;
    cout << "Enter first distance: " ;
    cin >> d1.ft >> d1.inch;
    cout << "Enter second distance: " ;
    cin >> d2.ft >> d2.inch ;
    larger(d1, d2);
    cout << "larger distance is " << d1.ft << "\'-" << d1.inch << "\"" ;
    return 0;
}
//--------------------------------------------------------------------------
void larger(distan& s, distan f)
{
    if (12*s.ft+s.inch<12*f.ft+f.inch)
        s=f;
}
