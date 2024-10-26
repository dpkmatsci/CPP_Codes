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
    link *first, *temp;
public:
    linklist()
    {
        temp = new link;
        temp->ptrl = NULL;
        first = temp;   // no arg constructor
    }
    void additem(double);
    void display();
    ~linklist();
};
//-------------------------------------------------
void linklist::additem(double d)
{
    temp->data = d;
    link* tmp = new link;
    temp->ptrl = tmp;
    tmp->ptrl = NULL;
    temp = tmp;
}
void linklist::display()
{
    link* curr=first;
    while ((curr->ptrl)!=NULL)
    {
        cout << curr->data << endl;
        curr=curr->ptrl;
    }
}

linklist::~linklist()
{
    link* del = first;
    while (del!=NULL)
    {
        link* tmp=del->ptrl;
        cout << "Deleting link " << del << endl;
        delete del;
        del=tmp;
    }
}
//-------------------------------------------------------
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
