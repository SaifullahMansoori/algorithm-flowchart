#include <iostream>
using namespace std;
int main()
{
    int ar[10];
    for (int i = 0; i < 10; ++i)
        cin >> ar[i];
    int target;
    cin >> target;
    for (int i = 0; i < 10; ++i)
        if (ar[i] == target)
            cout << i;

return 0;
}