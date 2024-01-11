#include <iostream>
using namespace std;
int main()
{
    int index;
    cin >> index;
    int ar[index];
    for (int i = 1; i <= index; ++i)
    {
        ar[i - 1] = i;
    }
    int number;
    cin >> number;
    cout << endl;
   
    
    bool one = true;
    for (int i = 0; i < index; ++i)
    {
        if (ar[i] == number && one)
        {
            for (int j = i; j < index; ++j)
            {   
                if (j == index - 1)
                    ar[j] = 0;
                else 
                    ar[j] = ar[j + 1];
            }
            one = false;
        }
    }
    for (size_t i = 0; i < index - 1; ++i)
        cout << ar[i] << endl;
return 0;
}