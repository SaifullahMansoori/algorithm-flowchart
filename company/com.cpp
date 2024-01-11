#include <iostream>
using namespace std;
int main()
{
    struct emploee
    {
        string name;
        int salary;
        int add;
        int newSalary;
    } worker [500];
    for (int i = 0; i < 500; ++i)
    {
        cout << "Name : ";
        cin >> worker[i].name;
        cout << "Salary : ";
        cin >> worker[i].salary;

        if (worker[i].salary < 25000)
        {
            worker[i].add = worker[i].salary / 20;
            worker[i].newSalary = worker[i].salary + worker[i].add;
        }
        else if (worker[i].salary >= 25000 && worker[i].salary <= 35000)
        {
            worker[i].add =(worker[i].salary  * 7) / 100;
            worker[i].newSalary = worker[i].salary + worker[i].add;
        }
        else
        {
            worker[i].add = worker[i].salary / 10;
            worker[i].newSalary = worker[i].salary + worker[i].add;
        }
    }
    for (auto &i : worker)
    {
        cout <<"Name : " <<i.name << endl;
        cout <<"Salary : " <<i.salary << endl;
        cout <<"Added money : " <<i.add << endl;
        cout <<"New salary : " <<i.newSalary << endl;
    }

return 0;
}