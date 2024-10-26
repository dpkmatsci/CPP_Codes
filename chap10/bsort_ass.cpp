#include <iostream>
using namespace std;

const int sz = 10;
// bsort of array elements without using pointer
void bsort( int[sz] );

int main()
{
    int arr[] = {20, 79, 14, 8, 18, 48, 32, 54, 17, 5};
    cout << "The array without sorting is ";
    for (int i = 0; i<sz; i++)
        cout << arr[i] << " ";
    cout << endl;
    bsort(arr);
    cout << "The array after sorting is ";
    for (int i=0; i<sz;i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}
//----------------------------------------------------
void bsort(int a[sz])
{
    void order(int&, int&);
    for (int i=0; i<sz-1; i++)
        for (int j = i+1; j < sz; j++)
           {
                order(a[i],a[j]);
           }
}
//----------------------------------------------------
void order(int& a, int& b)
{
    if (a>b)
    {
        a=a+b;
        b=a-b;
        a=a-b;
    }
}


