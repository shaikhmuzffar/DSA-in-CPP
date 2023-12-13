#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector<int> arr{1,2,4,4,4,5,6,7,8,8,8,8,9,10,11};
    int target=4;

    auto ans= upper_bound(arr.begin(), arr.end(),target);
    cout<<"ans is:"<<ans+arr.end()<<endl;

    return 0;
}
