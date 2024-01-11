#include <iostream>
using namespace std;
int main()
{
    int index = 5;
    int ar1[index]{1,2,3,4,5};
    int ar2[index]{5,6,7,8,1};

    int common[index] {};
    int p = 0;
    for (int i = 0; i < index; ++i)
        for (int j = 0; j < index; ++j)
            if (ar1[i] == ar2[j])
            {
                common[p] = ar1[i];
                p++;
            }
    for (auto& i: common)
        if (i != 0)
            cout << i << " ";

    // one thing that may be problematic is 0 ...

return 0;
}