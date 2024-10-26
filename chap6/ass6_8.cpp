#include <iostream>
using namespace std;

class obj
{
private:
    int serial;
    static int contr;
public:
    obj()
    {
        serial = ++contr;
    }
    void showsrl()
    {
        cout << "My serial no. is " << serial;
    }
};
//------------------------------------------------
int obj::contr = 0;
//------------------------------------------------
int main()
{
    obj a, b, c;
    c.showsrl();
    return 0;
}
