#include <iostream>
using namespace std;

// bsort using pointers
void bsort(int*, int);
int main()
{
    int arr[] = {20, 79, 14, 8, 18, 48, 32, 54, 17, 5};
    int noelem = sizeof(arr)/sizeof(arr[0]);
    cout << "The array without sorting is ";
    for (int i = 0; i<noelem; i++)
        cout << *(arr+i) << " ";
    cout << endl;
    bsort(arr, noelem);
    cout << "The array after sorting is ";
    for (int i = 0; i<noelem; i++)
        cout << *(arr+i) << " ";
    cout << endl;
    return 0;
}
//-------------------------------------------------------------
void bsort(int* ar, int nelem)
{
    void order(int*, int*);
    for (int i = 0; i<nelem-1;i++)
        for (int j = i+1; j< nelem; j++)
           {
               order(ar+i,ar+j);
           }
}
//----------------------------------------------------------------
void order(int* a, int* b)
{
    if (*a > *b)
    {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
}
