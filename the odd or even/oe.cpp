#include <iostream>
using namespace std;
class solution{
    public:
        int num;
        string evenodd (int num)
        {
            if (num % 2 == 0)
                return "Even";
            else
                return "Odd";
        }
};
int main()
{
    solution s;
    cin >> s.num;
    cout << s.evenodd(s.num);

return 0;
}