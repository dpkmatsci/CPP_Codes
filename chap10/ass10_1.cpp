#include <iostream>
using namespace std;

int main()
{
    int n;
    float sum = 0;
    cout << "Enter the no. of array elements: "; cin >> n;
    float* arr;
    arr = new float[n]; // returns pointer to memory location required for storage of n element array
    for (int i=0; i<n ; i++)
    {
        cout << "Enter element for index " << i << ": " ;
     /*   cin >> arr[i];
        sum = sum + arr[i]; */  // for normal notations
        cin >> *(arr+i);    // using pointer to assign and add elements;
        sum = sum + *(arr+i);
    }
    float avg = sum/n;
    cout << "The average of given array is " << avg << endl;
    cout << arr << endl;
    return 0;
}
