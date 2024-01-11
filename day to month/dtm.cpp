#include <iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    int month = num / 30;
    int day = num % 30;

    cout << month << endl;
    cout << day << endl;


    return 0;
}