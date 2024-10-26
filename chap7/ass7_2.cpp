#include <iostream>
#include <string>
using namespace std;

class employee
{
private:
    string emplname;
    long emplid;
public:
    void getdata()
    {
        cout << "Enter employee name: " ;
        getline(cin, emplname, '$');
        cout << "Enter employee id: " ;
        cin >> emplid;
    }
    void putdata()
    {
        cout << "The employment id of " << emplname << " is " << emplid << endl;
    }
};
//---------------------------------------------------------------------------------
int main()
{
    int maxs = 3;
    employee a[maxs];
    for (int i=0; i<maxs; i++)
    {
        a[i].getdata();
    }
    for (int i=0; i<maxs ; i++)
    {
        a[i].putdata();
    }
    return 0;
}
