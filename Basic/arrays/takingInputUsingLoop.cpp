#include <iostream>

using namespace std;

int main()
{

    int arr[5];

    for (int i = 0; i < 5; i++)
    {
        cout << "enter the value for arr[" << i << "]" << endl;
        cin >> arr[i];
    }
        cout << "[";

    for (int i = 0; i < 5; i++)
    {
        if (i == 4)
        {
            cout << arr[i];
        }
        else
        {
            cout << arr[i] << ", ";
        }

    }
        cout << "]";


    return 0;
}