#include <iostream>
using namespace std;
int main()
{
    for (int i = 3; i < 1000; ++i)
    {
        int count = 0;
        for (int j = 2; j < i / 2 + 1; ++j)
        {
            if (i % j == 0)
                count++;
        }
        if (count == 0)
            cout << i << endl;
    }


return 0;
}
