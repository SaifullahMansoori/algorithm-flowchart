#include <iostream>
using namespace std;
int main()
{

    int m, n;
    cin >> m >> n;
    int up = 0, down = 0;
    int mat[m][n] {};
    for (int i = 0; i < m; ++i)
        for (int j = 0; j < n; ++j)
        {
            cin >> mat[i][j];
            if (i < j)
                up += mat[i][j];
            else if (i > j)
                down += mat[i][j];
        }
            
        

    if (up == down)
        cout << "Motaqeren";
    else
        cout << "Motaqaren no";
return 0;
}