#include <iostream>
using namespace std;
int Awal (int n);
int main()
{
    int arr[5];
    for (int i = 0; i < 5; ++i)
        cin >> arr[i];


    for (int i = 0; i < 5; ++i)
    {
        if (arr[i] != 0)
            if (Awal(arr[i]) != 0)
                cout << arr[i] << " ";

    }


return 0;
}
int Awal (int n)
{
    for (int i = 2; i <= n / 2; ++i)
        if (n % i == 0)
            return 0;
    if (n > 9 && n < 100)
        return n;
    return 0;
}