#include <iostream>
using namespace std;

enum etype {laborer, secretary, manager, accountant, executive, researcher};

int main()
{
    etype e1;
    char initials;
    cout << "Enter employee type (first letter only) laborer, secretary, manager, accountant, executive, researcher):";
    cin >> initials;
    switch(initials)
    {
        case 'l' : e1 = laborer ; break;
        case 's' : e1 = secretary ; break;
        case 'm' : e1 = manager ; break;
        case 'a' : e1 = accountant ; break;
        case 'e' : e1 = executive ; break;
        case 'r' : e1 = researcher ; break;
    }
    switch(e1)
    {
        case 0 : cout << "The employee type is laborer" << endl; break;
        case 1 : cout << "The employee type is secretary" << endl; break;
        case 2 : cout << "The employee type is manager" << endl; break;
        case 3 : cout << "The employee type is accountant" << endl; break;
        case 4 : cout << "The employee type is executive" << endl; break;
        case 5 : cout << "The employee type is researcher" << endl; break;
    }
   // cout << "The employee type is " << e1 << endl;
    return 0;
}
