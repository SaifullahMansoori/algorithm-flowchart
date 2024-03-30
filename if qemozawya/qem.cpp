#include <iostream>
using namespace std;
bool ifqiem(int a, int b, int c);
int main()
{

    cout << ifqiem (4,3,5);


return 0;
}
bool ifqiem(int a, int b, int c)
{
    if (a*a == b*b + c*c || b*b == a*a + c*c || c*c == a*a + b*b)
        return true;
    return false;
}