#include <iostream>
using namespace std;
bool ifrectangle (int a, int b, int c);
int main ()
{
    cout << ifrectangle (1,2,30);
    
    

return 0;
}
bool ifrectangle (int a, int b, int c)
{
    if (a <= b + c)
        if (b <= a + c)
            if (c <= a + b)
                return true;
    return false;
}