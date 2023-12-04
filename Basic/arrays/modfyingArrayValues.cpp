#include <iostream>

using namespace std;

int main()
{

    int arr[5] = {1, 3, 5, 7, 9};

    cout<<"printing original array"<<endl;
    for (int i = 0; i < 5; i++)
    {

        cout<<arr[i];
    }

    for (int i = 0; i < 5; i++)
    {
        arr[i] = 1;
    }

    cout<<endl;
    cout<<"printing modified array"<<endl;
    for (int i = 0; i < 5; i++)
    {

        cout<<arr[i];
    }

    return 0;
}