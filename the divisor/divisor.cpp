#include <iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    int count = 0 , sum = 0;
    for (int i = 1; i < num / 2 + 1; ++i)
    {
        if (num % i == 0)
        {
            cout << i << endl;
            count++;
            sum += i;
        }
    }
    cout << num << endl;
    cout << ++count << endl;
    cout << sum + num << endl;

return 0;
}