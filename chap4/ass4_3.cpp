#include <iostream>
// Nested structures
using namespace std;

struct dist
{
    int feet;
    float inches;
};

struct volume
{
    dist lngth, brdth, height;
};

int main()
{
    volume room;
    cout << "Enter length of room in feet and inches: " ;
    cin >> room.lngth.feet >> room.lngth.inches ;
    cout << "Enter breadth of room in feet and inches: " ;
    cin >> room.brdth.feet >> room.brdth.inches ;
    cout << "Enter height of room in feet and inches: " ;
    cin >> room.height.feet >> room.height.inches ;
    float l = room.lngth.feet + room.lngth.inches/12;
    float b = room.brdth.feet + room.brdth.inches/12;
    float h = room.height.feet + room.height.inches/12;
    cout << "The volume of room is " << l*b*h << " cubic ft. " << endl ;
    return 0;
}
