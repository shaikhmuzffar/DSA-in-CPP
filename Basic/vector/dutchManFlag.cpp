#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {1, 2, -3, 4, -5, 6};

    int l = 0;
    int h = arr.size() - 1;

    while (l <= h)
    {
        if (arr[l] < 0)
        {
            l++;
        }
        else if (arr[h] > 0)
        {
            h--;
        }
        else
        {
            swap(arr[h], arr[l]);
        }
    }

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}