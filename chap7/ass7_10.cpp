#include <iostream>
#include <process.h>
using namespace std;

const int limit = 10;
class matrix
{
private:
    int a[limit][limit];
public:
    matrix()
    {
        for (int i=0; i<limit; i++)
            for (int j=0; j<limit; j++)
            {
                a[i][j] = 0;
            }
    }
    void putel(int indx1, int indx2, int temp)
    {
        if ((indx1 <0 || indx1 > limit-1) || (indx2 <0 || indx2 > limit-1))
        {
            cout << "Index exceeds the limit of array" << endl;
        }
        else
            a[indx1][indx2] = temp;
    }
    int getel(int indx1, int indx2)
    {
        if ((indx1 <0 || indx1 > limit-1) || (indx2 <0 || indx2 > limit-1))
            {
                cout << "Index exceeds the limit of array" << endl; exit(1);
            }
        else
            return a[indx1][indx2];
    }
};
//-------------------------------------------------------------------
int main()
{
    matrix m1;
    int tmp = 12348;
    m1.putel(2,1,tmp);
    tmp = m1.getel(1,1);
    cout << tmp;
    return 0;
}
