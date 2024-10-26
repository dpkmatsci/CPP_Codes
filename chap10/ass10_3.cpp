#include <iostream>
#include <cstring>
using namespace std;

void bsort(char**, int);
const int days = 7;

int main()
{
    char* arrptrs[days]={"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    cout << "The unsorted list is " << endl;
    for (int i = 0; i< days ; i++)
        cout << arrptrs[i] << " ";
    cout << endl;
    bsort(arrptrs, days);
    cout << "The sorted list is " << endl;
    for (int i = 0; i< days ; i++)
        cout << *(arrptrs+i) << " "; //  cout << arrptrs[i] << " "; also works
    cout << endl;
    return 0;
}
//---------------------------------------------------------------------------------------------
void bsort(char** ptrtoptr, int n)
{
    void order(char**, char**);
    for (int i=0; i<n-1;i++)
        for (int j=i+1;j<n;j++)
         {
                order((ptrtoptr+i),(ptrtoptr+j));
         }
}
//-----------------------------------------------------------------------
void order(char** a, char** b)
{
    if (strcmp(*a,*b)>0)
    {
      //  cout << *a << " " << *b << endl;
        char* tmpptr = *a;
        *a=*b;
        *b=tmpptr;
    }
}
