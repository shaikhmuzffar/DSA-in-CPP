#include <iostream>
#include <limits.h>
#include <vector>

using namespace std;

int main()
{
    // Vector 1
    vector<int> arrA = {1, 2, 4, 6, 8, 10};
    // Vector 2
    vector<int> arrB = {3, 4, 5, 6};

    // marking duplicates with INT_MIN
    for (int a = 0; a < arrA.size(); a++)
    {
        for (int b = 0; b < arrB.size(); b++)
        {
            if (arrA[a] == arrB[b])
            {
                arrB[b] = INT_MIN;
            }
        }
    }

    // vector for storing union above elements
    vector<int> arrC;

    // pushing elements of both arrays together in new array
    for (int a = 0; a < arrA.size(); a++)
    {
        if (a != INT_MIN){arrC.push_back(arrA[a]);}
    }

    for (int b = 0; b < arrB.size(); b++)
    {
        if (b != INT_MIN){arrC.push_back(arrB[b]);}
    }
    cout << endl;

    // printing elements of  array C
    for (int c = 0; c < arrC.size(); c++)
    {
         if (arrC[c] != INT_MIN)
    {
        cout << arrC[c] << " ";
    }
    }

    return 0;
}