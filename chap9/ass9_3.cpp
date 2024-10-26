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
class sales
{
private:
    int sale[3];
public:
    void getdata()
    {
        cout << "Enter the sales of last three months from past to future: ";
        cin >> sale[0] >> sale[1] >> sale[2] ;
    }
    void putdata()
    {
        cout << "The sales for last three months were " << sale[0] << ", " << sale[1] << " and " << sale[2] << endl;
    }
};
class book: private publication, private sales
{
private:
    int page;
public:
    void getdata()
    {
        publication::getdata();
        sales::getdata();
        cout << "Enter the no of pages: ";
        cin >> page;
    }
    void putdata()
    {
        publication::putdata();
        sales::putdata();
        cout << "The no. of pages are " << page << endl;
    }
};
class tape: private publication, private sales
{
private:
    float minut;
public:
    void getdata()
    {
        publication::getdata();
        sales::getdata();
        cout << "Enter the length of play in minutes: ";
        cin >> minut;
    }
    void putdata()
    {
        publication::putdata();
        sales::putdata();
        cout << "The length of play is " << minut <<" minutes." << endl;
    }
};
//--------------------------------------------------------------------------
int main()
{
    book som;
    tape somth;
    som.getdata(); cin.ignore();
    somth.getdata();
    som.putdata();
    somth.putdata();
    return 0;
}
