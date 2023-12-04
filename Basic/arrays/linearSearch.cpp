#include <iostream>

using namespace std;

int main()
{

    int size = 5;
    int arr[5] = {0, 1, 2, 3, 4};

    int searchValue = 5;
    bool found = false;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == searchValue)
        {
            found=true;
            break;
        }

    }
    if(found){
        cout<<"Found "<<endl;
    }else{
        cout<<"not Found "<<endl;

    }
}