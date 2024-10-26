#include <iostream>
// check problem 9
using namespace std;

class stack
{
private:
    static const int maxs = 20;
    double data[maxs];
    int pos;
public:
    stack()
    {
        pos = 0;
    }
    void getdata(double i)
    {
        if (pos>maxs-1)
        {
            cout << "No space left in stack" << endl;
        }
        else
        {
            data[pos] = i;
            pos++;
        }
    }
    void putdata()
    {
        cout << "The data is " << data[--pos] << endl;
    }
};
//-------------------------------------------------
int main()
{
    stack a;
    a.getdata(65); a.getdata(45.12); a.getdata(78);
    a.putdata();
    a.getdata(66); a.getdata(23);
    a.putdata();
    a.putdata();
    a.putdata();
    return 0;
}
