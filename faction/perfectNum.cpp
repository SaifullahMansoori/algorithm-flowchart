#include <iostream>
using namespace std;
void perfect(int n);
int main()
{
    int arr[10];
    for (int i = 0; i < 10; ++i)
        cin >> arr[i];
    
    for (int i = 0; i < 10; ++i)
        perfect (arr[i]);
}
void perfect(int n)
{
    int sum = 0;
    for (int i = 1; i <= n / 2; ++i)
        if (n % i == 0)
            sum += i;

    if (sum == n)
        cout << n << endl;
    else
        return ;
}