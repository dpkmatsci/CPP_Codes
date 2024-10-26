#include <iostream>
#include <process.h>
using namespace std;

const int maxsize = 10;
const int numarr = 10;

class linarr
{
protected:
    int* ap[numarr];
public:
    void allotmem()
    {
        for (int i = 0; i<numarr;i++)
         {
              ap[i]= new int[maxsize];
         }
    }
};
class linarrmod:private linarr
{
public:
    void allotmem()
    {
        linarr::allotmem();
    }
    int &operator [](int n)
    {
        if ((n<0) || (n>maxsize*numarr-1))
            {
                cout << "Array index out of bounds" ; exit(1);
            }
        int c = n/maxsize; int d= n%maxsize;
        return *(*(ap+c)+d);
    }
};
//------------------------------------------------------
int main()
{
    linarrmod a;
    a.allotmem();
    int k = 0;
    for (int i=0; i<100; i++)
    {
        a[i] = k;
        k+=10;
    }
    // Display values
    for (int i = 0; i<100; i++)
    {
        cout << a[i] << " " ;
    }
    return 0;
}
