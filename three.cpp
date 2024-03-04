#include <iostream>
using namespace std;
int main()
{

    int n;
    cin >> n;

    int ar[n][n];

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if ((j + 1) % 2 == 0)
                ar[i][j] = 0;
            else
                ar[i][j] = 1;
        }
    }

    for (auto& i: ar)
    {
        for(auto& j : i)
            cout << j << " ";
        cout << endl;
    }


return 0;
}