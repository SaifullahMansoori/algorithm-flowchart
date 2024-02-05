#include <iostream>
using namespace std;
int main()
{
    int n , m;
    cin >> m >> n;
    int row[n] {}, col[m] {};

    int mat[m][n];
    int p = 0, q = 0;
    for (int i = 0; i < m; ++i)
    {   
        q =  0;
        for (int j = 0; j <n; ++j)
        {
            cin >> mat[i][j];
            col[p] += mat[i][j];
            row [q] += mat[i][j];
            q++;
        }
        p++;
    }
    
    for (auto& i : col)
        cout << i << " ";
    cout << endl;
    for (auto& i : row)
        cout << i << " ";


    // for (auto& i : mat)
    // {
    //     for (auto& j : i)
    //         cout << j <<" ";
    //     cout << endl;
    // }


return 0;
}