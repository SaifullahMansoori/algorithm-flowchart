#include <iostream>
using namespace std;
int main()
{
    int times, max = INT_MIN;
    cin >> times;
    while (times--)
    {
        int num;
        cin >> num;
        (num > max)? max = num : max = max;
    }
    cout << max;
return 0;
}