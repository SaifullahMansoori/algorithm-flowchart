#include <iostream>
using namespace std;
class Solution
{
public:
    unsigned long long int febonachee (int num)
    {
        if (num < 3)
            return 1;
        unsigned long long first = 1;
        unsigned long long second = 1;
        unsigned long long third = 0;
        for (int i = 3; i <= num; ++i)
        {
            third = first + second;
            first = second;
            second = third;
        }
        return third;
    }
};
int main()
{
    Solution sul;
    for (int i = 1; i < 100; ++i)
        cout << sul.febonachee(i) << endl;
    
return 0;
}