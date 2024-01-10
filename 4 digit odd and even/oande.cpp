#include <iostream>
using namespace std;
int main()
{
    for (int i = 1010; i < 10000; ++i)
    {
        int num = i, count = 0, j = 1;
        while (num > 0)
        {
            int r = num % 2;
            if (j == 1 || j == 3)
            {
                if (r == 0)
                    count++;
            }
            else if (j == 2 || j == 4)
            {
                if (r == 1)
                    count++;
            }
            num /= 10;
            j++;
        }
        if (count == 4)
            cout << i << endl;
    }


return 0;
}