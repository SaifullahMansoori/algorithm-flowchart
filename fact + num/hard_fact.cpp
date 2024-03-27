#include <iostream>
using namespace std;
int fact (int);
int main ()
{
    int num, sum = 0;
    cin >> num;

    for (int i = 1; i <= num; ++i)
    {
        sum += fact(i);
        cout << fact (i) << endl;
    }
    cout << sum;


return 0;
}
int fact (int num)
{
    if (num == 1)
        return 1;
    else
        return num * fact (num - 1);
}