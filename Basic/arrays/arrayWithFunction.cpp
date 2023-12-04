#include <iostream>

using namespace std;

int inc(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] += 10;
    }
    return arr[size - 1];
}
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int size = 5;
    int arr[5] = {0, 1, 2, 3, 4};

    cout<<"array before incrementing"<<endl;
    printArray(arr, size);

    inc(arr, size);

    cout << endl;
    cout<<"array after incrementing"<<endl;
    printArray(arr, size);

}