#include <iostream>
using namespace std;
int main()
{
    char alpha[3] {'X', 'Y', 'Z'};

    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j)
            for (int k = 0; k < 3; ++k)
            {
                if (i == j || j == k || i == k)
                    continue; 
                else
                    cout << alpha[i] << alpha[j] << alpha[k];
                cout << endl;
            }
 
 


return 0;
}