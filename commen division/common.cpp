#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int sum = a * b;
    if (a >! b)
    {
        int temp = a;
        a = b;
        b = temp;
    }
    int c = a % b;
    while (c != 0)
    {
        a = b;
        b = c;
        c = a % b;
    }
    cout << "Gratiest Common division : " << b << endl;
    cout << "Smallest multiole division : " << sum / b << endl;

return 0;
}