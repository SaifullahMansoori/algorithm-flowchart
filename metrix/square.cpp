#include <iostream>
using namespace std;
int main()
{

    int m, n;
    cin >> m;
    int up = 0, down = 0;
    int mat[m][m] {};
    int p = 1;
    for (int i = 0; i < m; ++i)
        for (int j = 0; j < m; ++j)
        {
            mat[i][j] = p;
            p++;
        }

    
    for (auto& i: mat)
    {
        for (auto& j: i)
            cout << j << " ";
        cout << endl;
    }
            
return 0;   
}