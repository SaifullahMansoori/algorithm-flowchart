#include <iostream>
using namespace std;
void swap (int& a, int& b);
int main()
{
    int a = 4;
    int b = 1;

    swap (a,b);
    cout << a << endl;
    cout << b << endl;


}
void swap (int& a, int& b)
{
    a = a + b;
    b = a - b;
    a = a - b;
}