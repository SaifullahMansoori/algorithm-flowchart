#include <iostream>
using namespace std;
int main()
{
    int ar[20];
    for (int i = 0; i < 20; ++i)
        cin >> ar[i];

    for (int i = 0; i < 20; ++i)
        if (ar[i] % 2 == 0)
            cout << ar[i];
    for (int i = 0; i < 20; ++i)
        if (ar[i] % 3 == 0)
            cout << ar[i];
return 0;
}