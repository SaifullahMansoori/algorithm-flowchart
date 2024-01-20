#include <iostream>
using namespace std;
int main()
{
    int number, sum = 0;
    cin >> number;
    int n = number;
    while (n > 0)
    {
        int r = n % 10;
        sum += r;
        n /= 10;
    }
    (number % sum == 0)? cout << "YES" : cout << "NO";

return 0;
}