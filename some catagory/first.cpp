#include <iostream>
using namespace std;
int main()
{
    int num = 7;
    double s = 0;
    // the same will be done for 1 + 1/ i*2
    for (int i = 1; i <= num; ++i)
    {
        s += 1 / (double)i;
    }
    cout << s;

return 0;
}