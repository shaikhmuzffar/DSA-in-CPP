#include <iostream>

using namespace std;

int main()
{

  // pattern 1 - solid rectangle

  // expected o/p:

  /*
   * * * * *
   * * * * *
   * * * * *
   */
  // approch 1
  // for(int row =0;row <3;row++){
  //     for(int col =0;col <5;col++){
  //         cout<<"* ";
  //     }
  //     cout<<endl;
  // }

  // ----------------------------------------------------------------

  // pattern 2 - solid square with user input

  // expected o/p:

  /*
   *  *  *  *
   *  *  *  *
   *  *  *  *
   *  *  *  *
   */

  // int numberOfSquares;
  // cin>>numberOfSquares;
  // cout<<"okay, here is your "+numberOfSquares<<endl;
  // for (int row=0;row<numberOfSquares;row++){
  //     for(int col=0;col<numberOfSquares;col++){
  //         cout<<" * ";
  //     }
  //     cout<<endl;
  // }

  // ----------------------------------------------------------------

  /*
  pattern 3 - hollow rectangle

  expected o/p:

   * * * * *
   *       *
   * * * * *

  */

  // approch 1
  // for (int row = 0; row < 3; row = row + 1)
  // {
  //     if (row == 0 || row == 2)
  //     {
  //         for (int col = 0; col < 5; col = col + 1)
  //         {
  //             cout << "* ";
  //         }
  //     }
  //     else
  //     {
  //         for (int col = 0; col < 5; col = col + 1)
  //         {
  //             if (col == 0)
  //             {
  //                 cout << "* ";
  //             }
  //             else if (col == 4)
  //             {
  //                 cout << "* ";
  //             }
  //             else
  //             {
  //                 cout << "  ";
  //             }
  //         }
  //     }
  //     cout << endl;
  // }

  // approch 2
  // cout <<"10enter num:"<<endl;
  // int num=5;
  // cin >> num;
  // for (int row = 0; row <num;row++){
  //         cout<<"*";
  //         if(row==0 || row==num-1){
  //             for(int col = 0;col<num-1;col++){
  //                 cout<<" * ";
  //             }
  //         }else{
  //              for(int col = 0;col<num-1;col++){
  //                 cout<<"   ";
  //             }
  //         }
  //         cout<<"*";
  //     cout <<endl;
  // }

  // ----------------------------------------------------------------

  /* half pyramid

   expected o/p:

   *
   * *
   * * *
   * * * *
   * * * * *

   */
  // approch 1
  // cout<<"enter numbers:"<<endl;
  // int num;
  // cin>>num;
  // for(int row=0;row<num;row++){
  //     for(int col=0;col<=row;col++){
  //         cout<<"* ";
  //     }
  //     cout<<endl;
  // }

  // approch 2
  // int num = 5;
  // for(int row=0;row<num;row++){
  //     for(int col=0;col<row+1;col++){
  //         cout<<"* ";
  //     }
  //     cout<<endl;
  // }

  // ----------------------------------------------------------------

  /*
  inverted half pyramid

  expected output:

  * * * * *
  * * * *
  * * *
  * *
  *

  */

  //    aproach 1
  //    int num=5;
  //    for(int row=0; row<num; row++){
  //     for(int col=0; col<num-row; col++){
  //         cout<<"* ";
  //     }
  //     cout<<endl;
  //    }

  // ----------------------------------------------------------------

  /*

  numeric half pyramid

  expected output:

  1
  1 2
  1 2 3
  1 2 3 4
  1 2 3 4 5

  */

  //    aprroch 1
  // int num=5;
  // for (int row = 0; row < num; row++){
  //     for (int col = 0; col < row + 1; col++)
  //     {
  //         cout <<col+1<<" ";
  //     }
  //     cout<<endl;
  // }

  // ----------------------------------------------------------------

  /*
  inverted numeric half pyramid

  expected output:

  1 2 3 4 5
  1 2 3 4
  1 2 3
  1 2
  1

  */
  // approch 1
  // int num=5;
  // for(int row = 0; row < num; row++){
  //     for(int col = 0; col < num-row; col++){
  //         cout<<col+1<<" ";
  //     }
  //         cout<<endl;
  // }

  // ----------------------------------------------------------------

  /*
  full star pyramid

  expected output:

   *
  * *
 * * *
* * * *
* * * * * *

*/
  // approch 1
  // int num=5;
  // for(int row=1; row<=num; row++){
  //     for(int spc=0; spc<num-row; spc++){
  //         cout<<" ";
  //     }
  //     for(int str=0;str<row;str++){
  //         cout<<"* ";
  //     }
  //     cout<<endl;
  // }

  // ----------------------------------------------------------------

  /*
   inverse full pyramid

   expected output
   * * * * *
    * * * *
     * * *
      * *
       *

  */
  //    approch 1
  // int num=5;
  // for(int row=0;row<num;row++){
  //     for(int spc=0;spc<row;spc++){
  //         cout<<" ";
  //     }
  //     for(int str=num-row;str>0;str--){
  //         cout<<"* ";
  //     }
  //     cout<<endl;
  // }

  // ----------------------------------------------------------------

  /*
  hollow inverted half pyramid

  expected output

  * * * * *
  *     *
  *   *
  * *
  *

  */
  //    approch 1
  // int n = 10;
  // for (int row = 0; row < n; row++)
  // {
  //     for (int col = 0; col < n - row; col++)
  //     {
  //         if (row == 0 || col == 0 || col == n - (row + 1))
  //         {
  //             cout << "* ";
  //         }
  //         else
  //         {
  //             cout << "  ";
  //         }
  //     }
  //     cout << endl;
  // }

  // ----------------------------------------------------------------

  /*
  hollow full pyramid

  expected output
        *
      *   *
    *       *
  * * * * * * *

  */
  // approch 1
  // int n=6;
  // for (int row=0; row<n; row++){
  //     spaces
  //     for(int spc=0; spc<n-row+1; spc++){
  //         cout<<"  ";
  //     }
  //     stars
  //     for(int str=0; str<((2*row)+1); str++){
  //         if(row==0 || row==n-1 || str==0 ){
  //             cout<<"* ";
  //         }else{
  //             cout<<"0 ";
  //         }
  //     }
  //      spaces
  //     for(int spc=0; spc<n-row+1; spc++){
  //         cout<<"  ";
  //     }
  //     cout<<endl;
  // }
  // (2*n-1) cols
  // 2*row+1 for stars
  // spc=n-row+1 for spc

  // approch 2
  // int n = 6;
  // for (int row = 0; row < n; row++)
  // {
  //     int k=0;
  //     for (int col = 0; col < ((2 * n) - 1); col++)
  //     {
  //         if(col<n-row-1){
  //             cout<<"  ";
  //         }else if(k<2*row+1){
  //             if(k==0 || k==2*row || row==n-1){
  //                 cout<<"* ";
  //             }else{
  //                 cout<<"  ";
  //             }
  //             k++;
  //         }else{
  //             cout<<"  ";
  //         }
  //     }
  //     cout<<endl;
  // }

  // ----------------------------------------------------------------
  /*
  solid dimond

  expected output

       *
      * *
     * * *
    * * * *
  * * * * * *
  * * * * * *
    * * * *
     * * *
      * *
       *

  */

  // approach 1
  // int n=5;
  // upper triangle
  // for(int row=0;row<n;row++){
  //     spaces
  //     for(int spc=0;spc<n-row-1;spc++){
  //         cout<<" ";
  //     }
  //     stars
  //     for(int str=0;str<row+1;str++){
  //         cout<<"* ";
  //     }
  //     cout<<endl;
  // }
  // lower triangle
  // for(int row=0;row<n;row++){
  //     spaces
  //     for(int spc=0;spc<row;spc++){
  //         cout<<" ";
  //     }
  //     stars
  //     for(int str=0;str<n-row;str++){
  //         cout<<"* ";
  //     }
  //     cout<<endl;
  // }

  // ----------------------------------------------------------------

  /*
  hollow dimond

  expeced output:


       *
      * *
     *   *
    *     *
   *       *
   *       *
    *     *
     *   *
      * *
       *

  */

  int n = 5;
  // upper
  for (int row = 0; row < n; row++)
  {
    // spaces
    for (int spc = 0; spc < n - row - 1; spc++)
    {
      cout << " ";
    }
    // stars
    for (int str = 0; str < 2 * row + 1; str++)
    {
      if (str == 0)
      {
        cout << "*";
      }
      else if (str == 2 * row)
      {
        cout << "*";
      }
      else
      {
        cout << " ";
      }
    }
    cout << endl;
  }
  // lower
  for (int row = 0; row < n; row++)
  {
    // spaces 
    for (int spc = 0; spc< row; spc++)
    {
      cout << " ";
    }
    // stars 
    for(int str=0; str <2*n-2*row-1;str++){
      if(str ==0 || str==2*n-2*row-2){
        cout << "*";
      }
      else{
      cout << " ";

      }
    }
    cout<<endl;
  }

  return 0;
}