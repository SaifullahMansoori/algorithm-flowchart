#include <iostream>
using namespace std;
class car
{
private: 
   int code[10] = {10,20,30,40,50,60,70,80,90,100};
public:
    string carId;
    int times;
    int pay (int fine)
    {
        for (int i = 0; i < 10; ++i)
            if ((fine - 1) == i)
                return (code[i] * times);
    }
};
int main()
{
    car crola;
    cin >> crola.carId;
    cin >> crola.times;
    int fine;
    cin >> fine;
    cout << crola.pay(fine);
return 0;
}