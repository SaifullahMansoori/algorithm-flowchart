#include <iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    int sum = 0, r, count = 0;
    while (num > 0)
    {
        r = num % 10;
        sum += r;
        count++;
        num /= 10;
    }
    cout << count << endl << sum;

return 0;
}