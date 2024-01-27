#include <iostream>
using namespace std;
int main()
{
    for (int i = 11; i < 100; ++i)
        if (i % 10 == i / 10)
            cout << i << endl;
            
return 0;
}