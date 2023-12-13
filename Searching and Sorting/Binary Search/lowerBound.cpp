#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector<int> arr{1,2,4,4,4,5,6,7,8,8,8,8,9,10,11};
    int target=8;

    auto ans= lower_bound(arr.begin(), arr.end(),target);
    cout<<"ans is:"<<ans-arr.begin()<<endl;

    return 0;
}
