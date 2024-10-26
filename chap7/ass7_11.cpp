#include <iostream>
#include <cstring>
#include <string>
using namespace std;

string ldtoms(long double);

int main()
{
    long double a;
    char ch;
    string s;
    do
    {
        cout << "Enter the amount of money: " << endl;
        cin >> a;
        s = ldtoms(a);
        cout << "The monetary value is " << s << endl;
        cout << "Do you want to continue (y/n): " << endl;
        cin >> ch;
    } while(ch != 'n');
    return 0;
}
//-----------------------------------------------------------
string ldtoms(long double a)
{
    int k=0, fraci;
    long intp;
    float fracp;
    char intch[80], intfnlch[20], fracch[4];
    intp = static_cast<long>(a);
    fracp = a-static_cast<float>(intp);
    do
    {
        intch[k]=static_cast<char>(intp%10+48);
        k++;
        intp = intp/10;
        if (k%4 ==3 && intp !=0)
        {
            intch[k]=',';
            k++;
        }
    } while (intp != 0);
    intch[k]=0;
    fracch[0]='.';
    for (int i =1 ; i<=2 ; i++)
    {
        fraci = 10*fracp;
        fracch[i] = static_cast<char>(fraci+48);
        fracp = 10*fracp-fraci;
    }
    fracch[3]=0;
    int len = strlen(intch);
    intfnlch[0]='$';
    k =1;
    for (int i=len-1; i>=0; i--)
    {
        intfnlch[k]=intch[i];
        k++;
    }
    intfnlch[k]=0;
    string intstr=intfnlch;
    string fracstr = fracch;
    string tot = intstr+fracstr;
    return tot;
}
