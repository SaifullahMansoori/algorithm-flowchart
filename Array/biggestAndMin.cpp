#include <iostream>
using namespace std;
int main()
{
    int index;
    cin >> index;
    int ar[index];

    for (int i = 0; i < index; ++i)
    {
        cin >> ar[i];
    }
    int mx = INT_MIN;
    int mn = INT_MAX;
    for (int i = 0; i < index; ++i)
    {
        mx = max(mx, ar[i]);
        mn = min (mn, ar[i]);
    }
    cout << mx << endl;
    cout << mn << endl;
    


return 0;
}
