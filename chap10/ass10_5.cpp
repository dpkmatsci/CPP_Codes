#include <iostream>
using namespace std;

void addarrays(float*, float*, float*, int);

int main()
{
   float a[]={5.5, 7, 4.5, 8.9, 4.7, 1.2};
   float b[]={4.6, 4.8, 1.6, 8.9, 6.9, 8.3};
   const int noelem = sizeof(a)/sizeof(a[0]);
   float c[noelem];
   addarrays(a, b, c, noelem);
   cout << "The array after summation is " << endl;
   for (int i=0;i<noelem;i++)
   {
       cout << c[i] << " ";
   }
   return 0;
}
//---------------------------------------------------------
void addarrays(float* e, float* f, float* g, int d)
{
    for (int i=0;i<d;i++)
         *g++ = *e++ + *f++;
       // *(g+i) = *(e+i)+*(f+i); also works
}
