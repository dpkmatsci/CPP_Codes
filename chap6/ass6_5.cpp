#include <iostream>
using namespace std;

char dummychar;

class date
{
private:
    int dd, mm, yyyy;
public:
    void getdate()
    {
        cout << "Enter date in format mm/dd/yyyy " ; cin >> mm >> dummychar >> dd >> dummychar >> yyyy;
    }
    void showdate()
    {
        cout << "The date is ";
        if (mm < 10) cout <<'0';
        cout << mm << dummychar;
        if (dd<10) cout <<'0';
        cout << dd << dummychar << yyyy;
    }
};
//---------------------------------------------------------------------------------------------------------
int main()
{
    date a; a.getdate();
    a.showdate();
    return 0;
}
