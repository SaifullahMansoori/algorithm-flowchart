#include <iostream>
using namespace std;
int fact (int n);
int main()
{
    int m, n;
    cin >> m >> n;
    cout << (fact(m) * 1.0) / (fact(n) * fact(m - n));
    
}
int fact (int n)
{
    if (n == 1 || n == 0)
        return 1;
    else
        return n * fact (n - 1);
}