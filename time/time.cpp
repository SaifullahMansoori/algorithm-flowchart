#include <iostream>
using namespace std;
int main()
{
    int sec = 4210;
    int hour = sec / 3600;
    int remender = sec % 3600;
    int min = remender / 60;
    remender = sec % 60;
    sec = remender;
    cout << hour << endl << min << endl << sec;

return 0;
}