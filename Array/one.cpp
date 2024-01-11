#include <iostream>
using namespace std;
int main()
{
    int index;
    cin >> index;
    int ar[index];
    for (int i = 0; i < index; ++i)
        cin >> ar[i];
    int number;
    cin >> number;

    int count = 0;
    for (int i = 0; i < index; ++i)
        if (ar[i] == number)
            count++;

    cout << count;
return 0;
}