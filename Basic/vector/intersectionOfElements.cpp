#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int arrA[] = {1, 3,3, 7};
    int sizeA = 4;
    int arrB[] = {1, 2, 3,3, 4, 5, 6, 7, 8};
    int sizeB = 9;

    // initializing vector
    vector<int> arrC;

    // comparing elements of array A with elements of array B
    for (int i = 0; i < sizeA; i++)
    {
        for (int j = 0; j < sizeB; j++)
        {

            if (arrA[i] == arrB[j])
            {
                // marking elements after comparison 
                arrB[j]=-1;
                // cout << endl;
                // cout << arrA[i] << "and " << arrB[j] << "matched" << endl;
                arrC.push_back(arrA[i]);
            }
        }
    }
    cout << endl;
    // printing elements of vector
    for (int i = 0; i < arrC.size(); i++)
    {
        cout << arrC[i] << " ";
    }
    return 0;
}