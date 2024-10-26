#include <iostream>
using namespace std;

class dist
{
private:
    int feet;
    float inches;
public:
    dist(): feet(0), inches (0)
    { }
    void getdata()
    {
        cout << "Enter distance in feet and inches: " ;
        cin >> feet >> inches;
    }
    void putdata()
    {
        cout << feet << '\"' << " and " << inches << '\'' << endl;
    }
    void divdist(dist, int);
    void adddist(dist, dist);
};
//-----------------------------------------------------------
void dist::divdist(dist a, int c)
{
    float tot = a.feet + a.inches/12;
    tot = tot/c;
    feet = static_cast<int>(tot);
    inches = (tot-feet)*12;
}
//------------------------------------------------------------
void dist::adddist(dist a, dist b)
{
    feet = a.feet+b.feet;
    inches = a.inches + b.inches;
    if (inches>=12)
    {
        inches -= 12;
        feet++;
    }
}
//-------------------------------------------------------------
int main()
{
    const int maxs = 5;
    dist avg, a[maxs];
    for (int i = 0; i<maxs ; i++)
    {
        a[i].getdata();
        avg.adddist(avg,a[i]);
    }
    cout << "The total sum of distances is "; avg.putdata();
    avg.divdist(avg, maxs);
    cout << "The average distances is ";  avg.putdata();
   return 0;
}
