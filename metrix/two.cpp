#include <iostream>
using namespace std;
int main()
{

    int n;
    cin >> n;

    int ar[n][n];
    int one = 0, end = n - 1;

    for (int i = 0; i < 5; ++i)
    {
        for (int j = 0; j < 5; ++j)
        {
            if (j == one || j == end)
                ar[i][j] = 1;
            else
                ar[i][j] = 0;
        }
        one++;
        end--;
    }

    for (auto& i: ar)
    {
        for(auto& j : i)
            cout << j << " ";
        cout << endl;
    }


return 0;
}