#include <iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    // if (num % 2 == 1)
    // {
    //     cout << "Odd number!";
    //     return 0;
    // }
    double sum = 0;
    int k = 1;
    for (int i = 2; i <= num; ++i)
    {
        double level = k * ((i - 1.0) / i);
        sum += level;
        k = -k;
    }
    cout << sum;



return 0;
}