#include <iostream>
using namespace std;
int main()
{
    int n , m;
    cin >> m >> n;
    int mat[m][n];

    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j <n; ++j)
        {
            cin >> mat[i][j];
        }
    }
    // lines to swamp
    int a, b;
    cin >> a >> b;
    --a;
    --b;
    for (int i = 0; i < n; ++i)
    {
        int temp = mat[a][i];
        mat[a][i] = mat[b][i];
        mat[b][i] = temp;
    }


    for (auto& i : mat)
    {
        for (auto& j : i)
            cout << j <<" ";
        cout << endl;
    }

return 0;
}