/*
numric Palindrome equiltrate Pyramid

expected output:
        1
      1 2 1
    1 2 3 2 1
  1 2 3 4 3 2 1
1 2 3 4 5 4 3 2 1

*/

#include <iostream>

using namespace std;

int main()
{

    int n = 5;

    for (int row = 0; row < n; row++)
    {
        // first half spaces
        for(int spc=0;spc<n-row-1;spc++){
            cout<<" ";

        }
        // for first half 
        int start=1;
        for(int pyrf=0;pyrf<row+1;pyrf++){
            cout<<start;
            start++;
        }

        // for second half
        int scStart=start-2;
        for(int pyrl=0;pyrl<row;pyrl++){
          cout<<scStart;
          scStart--;
        }



        cout<<endl;
    }

    return 0;
}