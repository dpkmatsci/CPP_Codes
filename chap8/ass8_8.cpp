#include <iostream>
#include <string>
#include <cstring>
using namespace std;

string str;
long double mstold(string);
string ldtoms(long double);

class bmoney
{
private:
    long double money;
public:
    bmoney(): money(0)
    { }
    bmoney(string s)
    {
        money = mstold(s);
    }
    explicit bmoney(long double c)
    {
        money = c;
    }
    void getmoney()
    {
        cout << "Enter the amount of money: " ;
        cin >> str;
        money = mstold(str);
    }
    void putmoney()
    {
        cout << "the amount of money is " << ldtoms(money) << endl;
    }
    bmoney operator + (bmoney b)
    {
        return bmoney(money+b.money);
    }
    bmoney operator - (bmoney b)
    {
        return bmoney(money-b.money);
    }
    bmoney operator * (long double c)
    {
        return bmoney(money*c);
    }
    bmoney operator / (long double c)
    {
        return bmoney(money/c);
    }
    long double operator / (bmoney c)
    {
        return (money/c.money);
    }
};
//------------------------------------------------------------
int main()
{
    bmoney a, b, c;
    long double d;
    char ch;
    do
    {
        cout << "Enter total money: " ; a.getmoney();
        cout << "Enter price per widget: " ; b.getmoney();
        c = a+b; c.putmoney();
        c = a-b; c.putmoney();
        long double e = a/b; cout << "No of widget is " << e << endl ;
        c = a/e; c.putmoney();
        c = c*e ; c.putmoney();
        cout << "Do you want to continue (y/n) :";
        cin >> ch;
    }while (ch != 'n');
    return 0;
}
//--------------------------------------------------------------
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
//----------------------------------------------------------------------
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
