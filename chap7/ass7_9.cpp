#include <iostream>
using namespace std;

class queues
{
private:
    static const int maxs = 20;
    double data[maxs];
    int tail, head;
public:
    queues()
    {
        tail = 0;
        head = 0;
    }
    void putdata(double i)
    {
        if (tail > maxs-1)
        {
            tail = 0;
        }
        data[tail] = i;
        tail++;
    }
    void getdata()
    {
        if (head > maxs-1)
        {
            head = 0;
        }
        cout << "The data is " << data[head] << endl;
        head++;
    }
};
//--------------------------------------------------
int main()
{
    queues a;
    a.putdata(65); a.putdata(45.12); a.putdata(78);
    a.getdata();
    a.putdata(66); a.putdata(23);
    a.getdata();
    a.getdata();
    a.getdata();
    return 0;
}
