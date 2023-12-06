#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int duplicates(vector<int>& arr){
    sort(arr.begin(), arr.end());
    for(int i=0; i<arr.size()-1;i++){
        if(arr[i]==arr[i+1]){
            return arr[i];
        }
    }
    
};

int main()
{
    vector<int> arr = {1,3,4,4,2};


  
    int res=duplicates(arr);
    cout<<"res = "<<res<<endl;
  

    return 0;
}
