#include <iostream>
using namespace std;
int pow (int x, int n);
int fact (int x);
int main()
{
    int x, n;
    cin >> x >> n;
    n = (2 * n) - 1;
    if (n < 1)
    {
        cout << "Error! not difined" << endl;
        return 0;
    }
    double sum = x;
    for (int i = 3; i <= n; i += 2)
    {
        if (i == 3)
            sum = sum - (pow (x, i) * 1.0) / fact (i);
        
        else 
            sum = sum + (pow (x, i) * 1.0) / fact (i);
    }
    cout << sum;

return 0;
}
int pow (int x, int n)
{
    if (n == 1)
        return x;
    else
       return x * pow (x, n - 1);
}
int fact (int x)
{
    if (x == 1)
        return 1;
    else 
        return x * fact (x - 1);
}