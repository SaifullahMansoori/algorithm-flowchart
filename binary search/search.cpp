#include <iostream>
using namespace std;
int main()
{
    int arr[] {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    int begin = 0;
    int end = sizeof (arr) / sizeof (arr[0]) - 1;
    int med = (end + begin) / 2;
    int target = 100;
    int i = 0;
    while (true && ++i < 10)
    {
        if (target > arr[med])
            begin = med + 1;
        else if (target < arr[med])
            end = med - 1;
        else 
        {
            cout << med;
            return 0;
        }
        med = (end + begin) / 2;
    }
    cout << "Not found!";



return 0;
}