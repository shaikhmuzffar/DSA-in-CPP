#include <iostream>

using namespace std;

int main()
{
    int n = 7;
    // for (int row = 0; row < n; row++)
    // {
    //     for (int col = 0; col < n; col++)
    //     {
    //         if (row == 0 || row == n - 1)
    //         {
    //             cout << "* ";
    //         }
    //         else
    //         {
    //             cout << "* ";
    //             for (int i = 0; i < n - 2; i++)
    //             {
    //                 cout << "  ";
    //             }
    //             cout << "* ";
    //         }
    //     }
    //     cout << endl;
    // }

    int a=5;
    int c=(++a)*(++a);
    cout<<c;
    return 0;
}