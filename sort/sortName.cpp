#include <iostream>
using namespace std;
void swamp (string& a, string& b);
int main()
{
    string arr[] {"nazir", "raza", "ali", "zahra"};
    int size = sizeof (arr) / sizeof(arr[0]);
    // very strange that by (j = 0) we can sort the arr decending and by (j = i) we can sort that acending
    for (int i = 0; i < size; ++i)
        for (int j = 0; j < size; ++j)
            if (arr[i] > arr[j])
                swamp (arr[i], arr[j]);

           

    for (auto &i: arr)
        cout << i << " ";

            


}
void swamp (string& a, string& b)
{
    string temp = a;
    a = b;
    b = temp;
}