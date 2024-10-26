#include <iostream>
using namespace std;
int const len  = 80;
enum paytype {hourly, weekly, monthly};

class employee
{
private:
    char name[len];
    unsigned long number;
public:
    void getdata()
    {
        cout << "Enter last name: " ; cin >> name;
        cout << "Enter employee number " ; cin >> number;
    }
    void putdata()
    {
        cout << "Name: " << name << endl;
        cout << "Employee number: " << number << endl;
    }
};
class employee2: private employee
{
private:
    double compensation;
    paytype pay; char ch;
public:
    void getdata()
    {
        employee::getdata();
        cout <<"Enter amount of compensation: "; cin >> compensation;
        cout << "Enter the payment frequency: h for hourly, w for weekly and m for monthly: "; cin >> ch;
        if (ch=='h')
            pay = hourly;
        else
            if (ch=='w')
            pay = weekly;
            else  pay = monthly;
    }
    void putdata()
    {
        employee::putdata();
        cout << "The amount of compensation is " << compensation << endl;
        cout << "The payment frequency is ";
        if (pay==hourly) cout << "hourly" << endl;
        if (pay==weekly) cout << "weekly" << endl;
        if (pay==monthly) cout << "monthly" << endl;
    }
};
class manager: private employee2
{
private:
      char title[len];
      double dues;
public:
    void getdata()
    {
        employee2::getdata();
        cout << "Enter the title "; cin >> title;
        cout << "Enter dues: "; cin >> dues;
    }
    void putdata()
    {
        employee2::putdata();
        cout << "Title: " << title <<endl;
        cout << "Dues : " << dues << endl;
    }
};
//----------------------------------------------------------------------
int main()
{
    manager m1;
    m1.getdata();
    m1.putdata();
    return 0;
}
