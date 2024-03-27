#include <iostream>
using namespace std;
int fact (int num);
int main ()
{
    cout << fact(6); 

return 0;
}
int fact (int num)
{
    if (num == 1)
        return 1;
    else
        return num * fact (num - 1);
}