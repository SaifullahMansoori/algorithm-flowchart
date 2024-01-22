#include <iostream>
using namespace std;
int main()
{
    string ar[5];
    for (int i = 0; i < 5; ++i)
        cin >> ar[i];
    string target;
    cin >> target;
    for (int i = 0; i < 5; ++i)
        if (ar[i] == target)
            cout << i;

return 0;
}