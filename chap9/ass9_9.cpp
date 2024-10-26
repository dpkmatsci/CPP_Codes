#include <iostream>
#include <string>
using namespace std;
char dummychar;

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
class date
{
private:
    int dt, mnth, year;
public:
    date():dt(0), mnth(0), year(0)
    {}
    void getdate()
    {
        cout << "enter date of publication in format dd:mm:yyyy ";
        cin >> dt >> dummychar >> mnth >> dummychar >> year;
    }
    void putdate() const
    {
        cout << "The date of publication is ";
        if (dt<10) cout << "0";
        cout << dt << dummychar ;
        if (mnth<10) cout << "0";
        cout << mnth << dummychar << year << endl;
    }
};
class publication2: private publication, private date
{
public:
    void getdetail()
    {
        publication::getdata();
        date::getdate();
    }
    void putdetail()
    {
        publication::putdata();
        date::putdate();
    }
};
class book: private publication2
{
private:
    int page;
public:
    void getdata()
    {
        publication2::getdetail();
        cout << "Enter the no of pages: ";
        cin >> page;
    }
    void putdata()
    {
        publication2::putdetail();
        cout << "The no. of pages are " << page << endl;
    }
};
class tape: private publication2
{
private:
    float minut;
public:
    void getdata()
    {
        publication2::getdetail();
        cout << "Enter the length of play in minutes: ";
        cin >> minut;
    }
    void putdata()
    {
        publication2::putdetail();
        cout << "The length of play is " << minut <<" minutes." << endl;
    }
};
//--------------------------------------------------------------------------
int main()
{
    book som;
    tape somth;
    som.getdata();
    cin.ignore();
    somth.getdata();
    som.putdata(); somth.putdata();
    return 0;
}
