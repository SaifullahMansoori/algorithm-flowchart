#include <iostream>
using namespace std;
int big();
int main()
{
    cout << big ();

return 0;
}
int big()
{
    int a, b, c;
     do {
        cin >> a >> b >> c;
        if (a > b && a > c)
            return a;
        else if (b > c && b > a)
            return b;
        else if (c > a && c > b)
            return c;
    }while (a == b && b == c);
    return 0;
}