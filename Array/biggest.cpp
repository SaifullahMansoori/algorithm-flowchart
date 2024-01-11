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
    int in = 0;
    for (int i = 0; i < index; ++i)
    {
        int change = mx;
        mx = max(mx, ar[i]);
        if (mx != change)
            in = i;
    }
    cout << mx << endl;
    cout << in << endl;
    


return 0;
}
// int max(int a, int b)
// {
//     if (a > b) 
//         return a;
//     return b;
// }