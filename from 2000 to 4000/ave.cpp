#include <iostream>
using namespace std;
int main()
{
    int num1 = 1000, num2 = 2000;
    int sum = 0;
    while (num1 <= num2)
    {
        cout << num1 << endl;
        sum += num1;
        num1 += 2;
    }
    cout << sum << endl;

    return 0;
}