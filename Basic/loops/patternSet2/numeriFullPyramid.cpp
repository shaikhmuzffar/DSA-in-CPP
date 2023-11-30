#include <iostream>

using namespace std;

int main()
{

    int n = 4;
    for (int row = 0; row < n; row++)
    {
        // spaces
        for (int spc = 0; spc < n - row - 1; spc++)
        {
            cout << "_";
        }
        // num pyramid 1
        for (int nums = 0; nums < row + 1; nums++)
        {
            cout<<row + nums+1;
        }
        // nums pyramid 2
        int start= 2*row;
        for(int nums = 0; nums < row; nums++){
            cout<<start;
            start--;
        }
        cout << endl;


    }

    return 0;
}