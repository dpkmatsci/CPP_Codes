#include <iostream>
using namespace std;

class counter
{
protected:
    unsigned int count;
public:
    counter(): count()
    {}
    counter(int c): count(c)
    {}
    unsigned int get_count() const
    {
        return count;
    }
    counter operator ++ ()
    {
       return counter(++count);
    }
    counter operator -- ()
    {
        return counter(--count);
    }
};
class post: public counter
{
public:
    post(): counter()
    {}
    post(int c):counter(c)
    {}
    post operator ++ (int)
    {
        post a(count);
        count++;
        return a;
    }
    post operator -- (int)
    {
        post a(count);
        count--;
        return a;
    }
};
//-------------------------------------
int main()
{
    post c1(10);
    cout << "c1 = " << c1++.get_count() << endl;
    cout << "c1 = " << c1.get_count() << endl;
    post c2 = c1++;
    cout << "c1 = " << c1.get_count() << endl;
    cout << "c2 = " << c2.get_count() << endl;
    post c3; c3 = c2++;
    cout << "c2 = " << c2.get_count() << endl;
    cout << "c3 = " << c3.get_count() << endl;
    post c4 = c3--;
    cout << "c3 = " << c3.get_count() << endl;
    cout << "c4 = " << c4.get_count() << endl;
    return 0;
}

