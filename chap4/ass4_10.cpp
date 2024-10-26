#include <iostream>
using namespace std;

struct sterling
{
    unsigned int pound, shilling, pence;
};

int main()
{
    sterling st;
    double pounds;
    cout << "Enter amount in new British currency pounds:" ;
    cin >> pounds ;
    st.pound = static_cast<int>(pounds);
    float shill = 20*(pounds-st.pound);
    st.shilling = static_cast<int>(shill);
    st.pence = static_cast<int>(12*shill-12*st.shilling);
    cout << "The entered amount is " << st.pound << '.' << st.shilling << '.' << st.pence << endl;
    return 0;
}
