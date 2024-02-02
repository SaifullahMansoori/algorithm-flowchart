#include <iostream>
using namespace std;
void swap (int& a, int& b);
int main()
{
    int index = 5;
    int ar[index];
    for (int i = 0; i < index; ++i)
        cin >> ar[i];
    
    //sorting begins
    for (int i = 0; i < index; ++i)
    {
        for (int j = 0; j < index - 1; ++j)
        {
            if (ar[j + 1] < ar[j])
            {
                swap(ar[j + 1], ar[j]);
            }
        }
    }
    for (auto& i: ar)
        cout << i << " ";

return 0;
}
void swap (int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}