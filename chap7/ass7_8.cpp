#include <iostream>
#include <process.h>
using namespace std;

const int limit = 20;
class safearray
{
private:
    int a[limit];
public:
    safearray()
    {
        for (int i=0; i<limit; i++)
            a[i] = 0;
    }
    void putel(int indx, int temp)
    {
        if (indx <0 || indx > limit-1)
        {
            cout << "Index exceeds the limit of array" << endl;
        }
        else
            a[indx] = temp;
    }
    int getel(int indx)
    {
        if (indx <0 || indx > limit-1)
            {
                cout << "Index exceeds the limit of array" << endl; exit(1);
            }
        else
            return a[indx];
    }
};
//-------------------------------------------------------------------
int main()
{
    safearray a;
    int tmp = 12348, f;
    a.putel(7,tmp);
    tmp = a.getel(20);
    cout << tmp;
    return 0;
}
