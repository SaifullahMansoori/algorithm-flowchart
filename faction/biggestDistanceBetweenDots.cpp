#include <iostream>
#include <cmath>
using namespace std;
double distance (int x2, int y2);
int main()
{
    int x2, y2;
    double arr[10];
    double mx = 0;
    for (int i = 0; i < 10; ++i)
    {
        cin >> x2;
        cin >> y2;
        arr[i] =  distance (x2, y2);
        mx = max (arr[i] , mx);
    }
    cout << mx;

}
double distance (int x2, int y2)
{
    return (sqrt (pow (x2, 2) + pow (y2, 2)));
}