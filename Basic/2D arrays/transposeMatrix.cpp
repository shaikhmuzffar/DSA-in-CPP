#include <iostream>
#include <vector>
using namespace std;

void transpose(int arr[][3], int rows, int cols,int transposed[][3])
{
    for (int row = 0; row < rows; row++)
    {
        for (int col = 0; col < cols; col++)
        {
            transposed[row][col]= arr[col][row];
        }
    }
}
void printArray(int arr[][3], int rows, int cols)
{
    for (int row = 0; row < rows; row++)
    {
        for (int col = 0; col < cols; col++)
        {
            cout << arr[row][col]<<" ";
        }
        cout << endl;
    }
}

int main()
{
    int arr[3][3] = {
        {1, 2, 3},
        {2, 3, 4},
        {5, 6, 1},
    };
    int rows = 3;
    int cols = 3;
    int transposed[3][3];

    cout<<"before"<<endl;
    printArray(arr, rows, cols);

    transpose(arr, rows, cols,transposed);
    cout<<"after"<<endl;
    printArray(transposed, rows, cols);

    return 0;
}