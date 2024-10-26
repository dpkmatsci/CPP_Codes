#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

long double mstold(string);

int main()
{
    long double a;
    char ch;
    string s;
   do
   {
    cout << "Enter the monetary value: ";
    cin >> s;
    a = mstold(s);
    cout << "The amount of money is "  << setprecision(15) << a << endl;
    cout << "Do you want to continue (y/n): " ;
    cin >> ch;
    } while (ch != 'n');
    return 0;
}
//------------------------------------------------------------------------------------
long double mstold(string s)
{
    long double sum, intp=0, fracp=0;
    int len = s.length();
    int i;
    char charray[len+1];
    char dot = 46;
    s.copy(charray,len);
    charray[len]=0;
    for (int i=0; i<len; i++)
    {
        if (charray[i] >= '0' && charray[i] <= '9')
            {
                intp = static_cast<int>(charray[i])-48 + 10*intp;
            }
        if (charray[i+1] == dot )
           {
               break;
           }
    }
    for (int i = len-1; i>0 ; i--)
    {
        if (charray[i] >= '0' && charray[i] <= '9')
            {
                fracp = static_cast<int>(charray[i])-48 + fracp/10;
            }
        if (charray[i-1] == dot )
            {
               fracp = fracp/10;
               break;
            }
    }
    sum = intp+fracp;
    return sum;
}
