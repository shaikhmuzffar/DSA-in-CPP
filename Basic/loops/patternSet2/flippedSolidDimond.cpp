#include <iostream>;

using namespace std;

int main()
{

    int n = 10;

    for (int row = 0; row < n; row++)

    {
        // upper part dimond

        // first half pyramid
        for (int str = 0; str < n - row; str++)
        {
            cout << "*";
        }

        // middle full pyramid
        for (int spc = 0; spc < 2 * row; spc++)
        {
            cout << " ";
        }

        // last half pyramid
        for (int str = 0; str < n -row; str++)
        {
            cout << "*";
        }
        cout << endl;
    }
    
    
    // lower part of dimond
    for (int row = 0; row < n; row++)
    {

        // first half pyramid
        for (int str = 0; str < row + 1; str++)
        {
            cout << '*';
        }
        // middle full pyramid
        for (int spc = 0; spc<2*n-2*row-2; spc++)
        {
            cout << ' ';
        }

        // last half pyramid
        for (int str = 0; str < row + 1; str++)
        {
            cout << '*';
        }
        cout << endl;
    }

    return 0;
}