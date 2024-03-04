#include <iostream>
using namespace std;
int main()
{
    int n , m;
    cin >> m >> n;
    int mat[m][n];
    int Tmat[n][m];
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j <n; ++j)
        {
            cin >> mat[i][j];
        }
    }
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j <n; ++j)
        {
            Tmat[j][i] = mat[i][j];
        }
    }

    for (auto& i: Tmat)
    {
        for (auto& j: i)
            cout << j << " ";
        cout << endl;
    }
return 0;
}