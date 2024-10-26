#include <iostream>
using namespace std;

int main()
{
   struct point
   {
       float xcoord, ycoord;
   };
   point p1, p2;
   cout << "Enter coordinates for p1:" ;
   cin >> p1.xcoord >> p1.ycoord;
   cout << "Enter coordinates for p2:" ;
   cin >> p2.xcoord >> p2.ycoord;
   cout << "Coordinates for p1+p2 are " << p1.xcoord+p2.xcoord << ',' << p1.ycoord+p2.ycoord << endl;
   return 0;
}
