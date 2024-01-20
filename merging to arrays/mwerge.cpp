#include <iostream>
using namespace std;
int main()
{
    int ar1[5] {1,2,3,4,5};
    int ar2[3] {6,7,8};
    int merge[8] {};

    for (int i = 0; i < 5; ++i)
        merge[i] = ar1[i];
    int j = 0;
    for (int i = 5; i < 8; ++i)
    {
        merge[i] = ar2[j];
        j++;
    }

    for (auto& i: merge)
        cout << i << " ";

return 0;
}