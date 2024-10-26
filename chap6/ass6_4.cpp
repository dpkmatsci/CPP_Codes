#include <iostream>
using namespace std;

class employee
{
private:
    int emplno;
    float emplcompn;
public:
    void getdata()
    {
        cout <<"Enter employee id and compensation: "; cin >> emplno >> emplcompn ;
    }
    void showdata()
    {
        cout <<"\n The compensation for employee with employee id " << emplno << " is " << emplcompn << endl;
    }
};
//----------------------------------------------------------------------------------------------------------------
int main()
{
    employee a, b, c;
    a.getdata(); b.getdata(); c.getdata();
    a.showdata(); b.showdata(); c.showdata();
    return 0;
}
