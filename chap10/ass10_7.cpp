#include <iostream>
#include <string>
using namespace std;

class person
{
private:
    string name;
    float salary;
public:
    void setdata()
    {
        cout << "Enter name : " << endl;
        cin >> name;
        cout << "Enter salary: " << endl;
        cin >> salary;
    }
    void printdata()
    {
        cout << "name:" << name << endl ;
        cout << "salary: " << salary << endl;
    }
    float getsalary()
    {
        return salary;
    }
};
//---------------------------------------------------
int main()
{
    void salsort(person**, int);
    person* persptr[100]; // array of pointers to persons
    int n=0;
    char choice;
    do
    {
        persptr[n]=new person; // make new object person
        persptr[n]->setdata();
        n++;
        cout << "Enter another choice y/n: " << endl; cin >> choice;
    }while (choice != 'n');
    // print unsorted list;
    for (int i =0; i<n; i++)
    {
        persptr[i]->printdata();
    }
    // print sorted list
    salsort(persptr, n);
    for (int i =0; i<n; i++)
    {
        persptr[i]->printdata();
    }
    return 0;
}
//------------------------------------------------------------------------
void salsort(person** ptrtoptr, int n)
{
    void order(person**, person**);
    for (int i=0; i<n-1; i++)
        for (int j=i+1; j<n; j++)
    {
        order(ptrtoptr+i,ptrtoptr+j);
    }
}
//------------------------------------------------------------------------------
void order(person** a, person** b)
{
    if ((*a)->getsalary()>(*b)->getsalary())
    {
        person* temp = *b;
        *b = *a;
        *a = temp;
    }
}
