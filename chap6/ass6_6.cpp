#include <iostream>
using namespace std;
char dummychar;
class date
{
private:
    int mm, dd, yyyy;
public:
    void getdate()
    {
        cout << "Enter the date of hire of employee in format mm/dd/yyyy: " ;
        cin >> mm >> dummychar >> dd >> dummychar >> yyyy;
    }
    void showdate()
    {
        if (mm < 10) cout <<'0';
        cout << mm << dummychar;
        if (dd<10) cout <<'0';
        cout << dd << dummychar << yyyy;
    }

};
class employee
{
private:
    int emplno;
    float emplsal;
    date hire;
public:
    void getdata()
    {
        cout <<"Enter employee no. " ; cin >> emplno ;
        cout << "Enter employee salary: "; cin >> emplsal;
        hire.getdate();
    }
    void putdata()
    {
        cout << "The employee with no. " << emplno << " was hired on ";
        hire.showdate(); cout <<" and his salary is "<< emplsal ;
    }
};
//------------------------------------------------------------------------------
int main()
{
    employee a; a.getdata(); a.putdata();
    return 0;
}
