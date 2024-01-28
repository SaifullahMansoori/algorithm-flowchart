#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0;
    cin >> n;
    for (int i = 1; i < n; ++i)
    {
        int a = i * (i + 1);
        sum += a;
    }
    cout << sum;


return 0;
}