#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int duplicates(vector<int>& arr){
    // sort(arr.begin(), arr.end());
    while (arr[0]!=arr[arr[0]])
    {
        swap(arr[0],arr[arr[0]]);
    }
    return arr[0];
    
};

int main()
{
    vector<int> arr = {1,3,4,4,2};
  
    int res=duplicates(arr);
    cout<<"res = "<<res<<endl;

    return 0;
}
