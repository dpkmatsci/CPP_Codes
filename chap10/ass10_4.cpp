#include <iostream>
using namespace std;

struct link
{
    double data;
    link* ptrl;
};
class linklist
{
private:
    link* first;
public:
    linklist()
    {
        first = NULL;   // No argument constructor
    }
    void additem(double);
    void display();
    ~linklist();
};
//--------------------------------------------------
void linklist::additem(double d)
{
    link* lnk=new link;
    lnk->data=d;
    lnk->ptrl=first;
    first=lnk;
}
void linklist::display()
{
    link* curr=first;
    while (curr!=NULL)
    {
        cout << curr->data << endl;
        curr=curr->ptrl;
    }
}
/*
linklist::~linklist()
{
        link* del=first;
        while (del!=NULL)
        {
            link* tmp=del;
            del=del->ptrl;
            cout << "Deleting link " << tmp << endl;
            delete tmp;
        }
}; */
linklist::~linklist()
{
        link* del=first;
        while (del!=NULL)
        {
            link* tmp=del->ptrl;
            cout << "Deleting link " << del << endl;
            delete del;
            del=tmp;
        }
};
//------------------------------------------------------------
int main()
{
    linklist li;
    li.additem(12);
    li.additem(32);
    li.additem(32.5);
    li.additem(19.8);

    li.display();
    return 0;
}
