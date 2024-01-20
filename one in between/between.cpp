#include <iostream>
using namespace std;
int main()
{
    int ar[20];
    for (int i = 0; i < 20; ++i)
    {
        if (i % 2 == 0)
            ar[i] = ((i + 1) / 2 ) + 1;
        else if (i % 2 == 1)
            ar[i] = (i + 1) / 2 + 10;
    }   

    for (auto &i: ar)
        cout << i << endl;


return 0;
}