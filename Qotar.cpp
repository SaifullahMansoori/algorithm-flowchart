#include <iostream>
using namespace std;
int main()
{

    int m, n;
    cin >> m >> n;
    int mat[m][n] {};
    for (int i = 0; i < m; ++i)
        for (int j = 0; j < n; ++j)
            if (i >= j)
                mat[i][j] = 1;
            
        

    for (auto& i: mat)
    {
        for (auto& j: i)
            cout << j << " ";
        cout << endl;
    }
return 0;
}