#include <iostream>

using namespace std;

int main()
{

    int n = 20;

    for (int row = 0; row < n; row++)
    {
        // upper half
        for (int str = 0; str < row + 1; str++)
        {
            cout << "*";
        }
        cout << endl;
    }

    // lower half
    for (int row = 0; row != n-1; row++){
        for(int str=0;str<n-row-1;str++){
            cout << "*";
        }
        cout<<endl;
    }

    return 0;
}