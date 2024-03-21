#include <iostream>
using namespace std;
int main()
{
    int num = 100, sum = 0, number;
    while (num--)
    {
        cin >> number;
        sum += number;
    }
    cout << sum;
return 0;
}