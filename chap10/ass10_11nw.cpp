#include <iostream>
#include <process.h>
using namespace std;

const int maxsize = 10;
const int numarr = 10;

class linarr
{
private:
    int* ap[numarr];
public:
    void allotmem()
    {
        for (int i = 0; i<numarr;i++)
         {
              ap[i]= new int[maxsize];
         }
    }
    int &operator [](int n)
    {
        if ((n<0) || (n>maxsize*numarr-1))
            {
                cout << "Array index out of bounds" ; exit(1);
            }
        int c = n/maxsize; int d= n%maxsize; //cout << ap << endl;
        return *(*(ap+c)+d);
    }
};
//------------------------------------------------------
int main()
{
    linarr a; a.allotmem();
    // Assign values;
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
