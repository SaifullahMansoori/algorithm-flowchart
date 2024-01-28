#include <iostream>
using namespace std;
void swamp (int& a, int& b);
int main()
{
    int arr[] {10,6,1,3,2,9,7,4,8,5};
    int size = sizeof (arr) / sizeof(arr[0]);
    // very strange that by (j = 0) we can sort the arr decending and by (j = i) we can sort that acending
    for (int i = 0; i < size - 1; ++i)
        for (int j = i; j < size; ++j)
            if (arr[i] > arr[j])
                swamp (arr[i], arr[j]);

           

    for (auto &i: arr)
        cout << i << " ";

            


}
void swamp (int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}