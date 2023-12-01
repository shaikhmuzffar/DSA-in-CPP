// numeric Hollow Half-Pyramid

/*

expected output:

1
1 3
1  4
1   5
123456

*/ 

#include <iostream>

using namespace std;

int main()
{

    int n = 10;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col <= row ; col++)
        {
            if (row == 0 || row == n - 1)
            {
                cout << col + 1;
            }
            else if(col == 0 || col == row){
                cout << col + 1;
            }
            else
            {
                cout <<" ";
            }
        }
            cout<<endl;

    }

    return 0;
}