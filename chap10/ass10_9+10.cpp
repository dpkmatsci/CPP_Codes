#include <iostream>
using namespace std;

int main()
{
    const int maxsize = 10;
    const int numarray = 10;
    int* ap[numarray];  // array of pointers
    for (int i=0; i<numarray; i++)
    {
      //  *(ap+i)=new int[maxsize]; // ap is pointer to array of pointers
          ap[i] = new int[maxsize];
    }
    // Assign values
    int k =0;
    for (int i = 0; i< numarray; i++)
        for (int j = 0; j< maxsize; j++)
    {
       // *(*(ap+i)+j)=k;
          *(ap[i]+j)=k;
        k+=10;
    }
    // Display values
    for (int i = 0; i< numarray; i++)
        for (int j = 0; j< maxsize; j++)
    {
       // cout << *(*(ap+i)+j) << " ";
        cout << *(ap[i]+j) << " ";
    }
    return 0;
}
