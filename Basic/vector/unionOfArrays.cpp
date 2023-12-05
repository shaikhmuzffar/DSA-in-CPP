#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int arrA[] = {1, 3, 7};
    int sizeA = 3;
    int arrB[] = {2, 4, 6, 8};
    int sizeB = 4;

    // initializing vector
    vector<int> arrC;

    // pushing elements of array 1 into vector
    for(int i = 0; i < sizeA; i++){
        arrC.push_back(arrA[i]);
    }

    // pushing elements of array 2 into vector
    for(int i = 0; i < sizeB; i++){
        arrC.push_back(arrB[i]);
    }

    // printing elements of vector
    for(int i = 0; i < arrC.size(); i++){
        cout<<arrC[i];
    }
    return 0;
}