#include <iostream>
using namespace std;
int main ()
{
    int num, count = 0;
    cin >> num;

    for (int i = 1; i <= num / 2; ++i)
    {
        if (num % i == 0)
            count++;
        if (count > 1)
            break;
    }
    if (count == 1)
        cout << "Unique";
    else
        cout << "Not unique";


return 0;
}