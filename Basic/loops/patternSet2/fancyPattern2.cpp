#include <iostream>
using namespace std;
int main()
{

    int n = 6;

    for (int row = 0; row < n; row++)
    {
        int col;
        for (col = 0; col < row + 1; col++)
        {
            int ans=col + 1;
            int ch=ans+ 'A';
            cout <<ch ;
        }
        col = col - 1;
        for (int i = col; i > 0; i--)
        {
            int ans=i;
            int ch=ans+ 'A';
            cout << ch;
        }
        cout << endl;
    }

    return 0;
}