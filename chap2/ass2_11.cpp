#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << setiosflags(ios::left) << setw(12) << "Last name" << setw(13) << "First name" << setw(18) << "Street address" << setw(11) << "Town" << setw(6) << "State" << endl
         << setw(59) << setfill('-') << '-' << setfill(' ') << endl
         << setiosflags(ios::left) << setw(12) << "Jones" << setw(13) << "Bernard" << setw(18) << "109 Pine Lane" << setw(11) << "Littletown" << setw(6) << "MI" << endl
         << setiosflags(ios::left) << setw(12) << "O'Brian" << setw(13) << "Coleen" << setw(18) << "42 E. 99th Ave." << setw(11) << "Bigcity" << setw(6) << "NY" << endl
         << setiosflags(ios::left) << setw(12) << "Wong" << setw(13) << "Harry" << setw(18) << "121-A Alabama St." << setw(11) << "Lakeville" << setw(6) << "IL" << endl;
    return 0;
}
