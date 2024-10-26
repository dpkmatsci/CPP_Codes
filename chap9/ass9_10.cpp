#include <iostream>
using namespace std;
int const len = 80;

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
class student
{
private:
    char school[len];
    char degree[len];
public:
    void getedu()
    {
        cout << "Enter the name of school: " ; cin >> school;
        cout << "Enter the highest degree bachelors, masters or PhD: " ; cin >> degree;
    }
    void putedu()
    {
        cout << "School: " << school << endl;
        cout << "Highest degree earned: " << degree << endl;
    }
};
class manager: private employee, private student
{
private:
      char title[len];
      double dues;
public:
    void getdata()
    {
        employee::getdata();
        student::getedu();
        cout << "Enter the title "; cin >> title;
        cout << "Enter dues: "; cin >> dues;
    }
    void putdata()
    {
        employee::putdata();
        student::putedu();
        cout << "Title: " << title <<endl;
        cout << "Dues : " << dues << endl;
    }
};
class executive: private manager
{
private:
    double yearbon;
    unsigned long noshare;
public:
    void getdata()
    {
        manager::getdata();
        cout << "Enter the yearly bonus: " ; cin >> yearbon;
        cout << "Enter the number of shares: "; cin >> noshare;
    }
    void putdata()
    {
        manager::putdata();
        cout << "The yearly bonus is " << yearbon << endl;
        cout << "The number of shares are " << noshare << endl;
    }
};
//-------------------------------------------------------------------------------
int main()
{
    executive e1;
    e1.getdata();
    e1.putdata();
    return 0;
}
