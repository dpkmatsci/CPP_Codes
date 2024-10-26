#include <iostream>
#include <stdlib.h>
using namespace std;

class safearay
{
private:
    int lowb, uppb;
    int arr[100];
public:
    safearay(): lowb(0), uppb(0)
    {}
    safearay(int a, int b): lowb(a), uppb(b)
    {}
    void getbounds()
    {
        do
        {
            cout << "Enter lower and upper bounds: " ;
            cin >> lowb >> uppb;
        } while(lowb>uppb);
    }
    int& operator [](int n) // return by reference
    {
        if (n< lowb-lowb || n> uppb-lowb )
        {
            cout << "arrey index out of bounds" ;
            exit(1);
        }
        return arr[n];
    }
};
//--------------------------------------------------------------
int main()
{
    safearay nw;
    nw.getbounds();
    for(int j = 0;j<100; j++)
    {
        nw[j] = j;
    }
    return 0;
}
