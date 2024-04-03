#include <iostream>
using namespace std;
int main()
{
    int salary = 10000;
    int housing = salary / 10;
    int ensurance = salary / 20;
    salary = salary - (housing + ensurance);
    cout << salary;

return 0;
}