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
            mat[i][j] = i + j;

    mat[0][0] = 1;
    for (auto& i: mat)
    {
        for (auto& j: i)
            cout << j << " ";
        cout << endl;
    }
            
return 0;   
}