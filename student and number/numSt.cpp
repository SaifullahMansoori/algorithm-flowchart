#include <iostream>
using namespace std;
int main()
{
    string name[3] {"Ali", "Mohammad", "Jawad"};
    int number[3] {100, 75, 20};
    string stNmae;
    cin >> stNmae;

    int index = 0;
    for (int i = 0; i < 3; ++i)
        if (name[i] == stNmae)
            index = i + 1;

    if (index != 0)
        cout << number[index - 1];

return 0;
}