#include <iostream>
using namespace std;
int main()
{
    int table[10][10];

    int num = 1;
    for (int i = 1; i <= 10; ++i)
    {
        for (int j = 1; j <= 10; ++j)
        {
            table[i - 1][j - 1] = i * j;
            num++;
        }
    }
    for (auto& i : table)
    {
        for (auto& j : i)
            cout << j << " ";
        cout << endl;
    }


return 0;
}