#include <iostream>
using namespace std;

int main()
{
    unsigned int gst, chr, ways=1, i=1;
    cout << "No of guest is always higher or equal than chair" << endl;
    cout << "Enter the number of guest:" ;
    cin >> gst;
    cout << "Enter the number of chair:" ;
    cin >> chr;
    if (gst >= chr)
    {
       while (i<=chr)
       {    ways *= gst--;
            i++;
       }
    }
    cout << "No. of ways possible for arrangement of guest is " << ways << endl;
    return 0;
}
