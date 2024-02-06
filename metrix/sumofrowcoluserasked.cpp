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
    
    int a, b;
    cin >> a >> b;
    --a;
    --b;
    int row = 0;
    int col = 0;
    for (int i = 0; i < n; ++i)
    {
        row += mat[a][i];
        if (i < m)
            col += mat[i][b];
    }

    cout << endl;
    cout << row << endl << col;

return 0;
}