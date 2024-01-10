#include <iostream>
using namespace std;
int main()
{
    for (int i = 100; i < 1000; ++i)
    {
        int num = i, j = 1,third, second, first;
        while (num > 0)
        {
            int r = num % 10;
            if (j == 1)
                first = r;
            else if (j == 2)
                second = r;
            else 
                third = r;
            num /= 10;
            j++;
        }
        if (first == third && second % 2 == 0)
            cout << i << endl;
            
    }


return 0;
}