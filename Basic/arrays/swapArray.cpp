#include <iostream>
using namespace std;

int main()
{
    int size = 7;
    int arr[8] = {1, 2, 3, 4, 5, 6, 7};
    int start = 0;
    int end = size - 1;
    cout << endl;

    cout << "print array..." << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    while (start <= end)
    {
        swap(arr[start], arr[end]);

        start++;
        end--;
    }
    cout << endl;
    cout << "print array..." << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}