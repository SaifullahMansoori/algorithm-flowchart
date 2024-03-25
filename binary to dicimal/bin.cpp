#include <iostream>
using namespace std;
int pow (int a, int b);
int main()
{
    int bin, sum = 0, i = 0;
    cin >> bin;

    while (bin > 0)
    {
        int r = bin % 10;
        sum = sum + (r * pow (2,i));
        bin /= 10;
        i++;
    }
    cout << sum;

return 0;
}
int pow (int a, int b)
{
    int s = 1;
    while (b--)
    {
        s = s * a;
    }
    return s;
}