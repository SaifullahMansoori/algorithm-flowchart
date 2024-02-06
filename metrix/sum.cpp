#include <iostream>
using namespace std;
int main()
{

    int n;
    cin >> n;

    int mat1[n][n];
    int mat2[n][n];
    int sum[n][n];


    cout << "Matrix 1: " << endl;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cin >> mat1[i][j];
        }
    }
    cout << "Matrix 2: " << endl;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cin >> mat2[i][j];
        }
    }
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            sum[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    cout << "Sum : " << endl;
    for (auto& i: sum)
    {
        for(auto& j : i)
            cout << j << " ";
        cout << endl;
    }
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            sum[i][j] = mat1[i][j] - mat2[i][j];
        }
    }
    cout << "Deffirence : " << endl;
    for (auto& i: sum)
    {
        for(auto& j : i)
            cout << j << " ";
        cout << endl;
    }



return 0;
}