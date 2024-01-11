#include <iostream>
using namespace std;
int main()
{
    int index;
    cin >> index;
    int ar[index];
    for (int i = 0; i < index; ++i)
        cin >> ar[i];

    cout << endl;
    for (int i = 0; i < index; ++i)
        for (int j = i; j < index; ++j)
        {
            if (i == j)
                continue;
            else if (ar[i] == ar[j])
            {
                cout << ar[i] << endl;
                break;
            }
        }

return 0;
}