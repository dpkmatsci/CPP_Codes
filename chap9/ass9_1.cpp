#include <iostream>
#include <string>
using namespace std;

class publication
{
private:
    string title;
    float price;
public:
    void getdata()
    {
        cout << "Enter the title: ";
        getline(cin,title);
        cout << "Enter the price: ";
        cin >> price;
    }
    void putdata()
    {
        cout << "The title is " << title << endl;
        cout << "The price is " << price << endl;
    }
};
class book: private publication
{
private:
    int page;
public:
    void getdata()
    {
        publication::getdata();
        cout << "Enter the no of pages: ";
        cin >> page;
    }
    void putdata()
    {
        publication::putdata();
        cout << "The no. of pages are " << page << endl;
    }
};
class tape: private publication
{
private:
    float minut;
public:
    void getdata()
    {
        publication::getdata();
        cout << "Enter the length of play in minutes: ";
        cin >> minut;
    }
    void putdata()
    {
        publication::putdata();
        cout << "The length of play is " << minut <<" minutes." << endl;
    }
};
//--------------------------------------------------------------------------
int main()
{
    book som;
    tape somth;
    som.getdata(); som.putdata();
    cin.ignore();
    somth.getdata(); somth.putdata();
    return 0;
}
