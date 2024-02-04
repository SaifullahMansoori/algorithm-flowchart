#include <iostream>
using namespace std;
int main()
{

    int n;
    cin >> n;
    int k;
    cin >> k;
    int ar[n][n];
 

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cin >> ar[i][j];
        }
    }
    for (auto& i: ar)
        for(auto& j : i)
            j = j * k;

    for (auto& i: ar)
    {
        for(auto& j : i)
            cout << j << " ";
        cout << endl;
    }


return 0;
}