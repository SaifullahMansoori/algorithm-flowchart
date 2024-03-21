#include <iostream>
using namespace std;
int main()
{
    struct worker
    {
        string name;
        int work_hour;
        int salary_per_hour;
    };
    int number;
    cin >> number;
    worker work[number];
    
    for (int i = 0; i < number; ++i)
    {
        cout << "Name : ";
        cin >> work[i].name;
        cout << "Work hour : ";
        cin >> work[i].work_hour;
        cout << "Work hour : ";
        cin >> work[i].salary_per_hour;
    }

    for (auto &i : work)
    {
        cout << i.name << endl;
        if (i.work_hour > 50)
            cout << (i.work_hour * i.salary_per_hour) * 3/2 << endl;
        else
            cout << i.salary_per_hour * i.work_hour << endl;    
    }



return 0;
}