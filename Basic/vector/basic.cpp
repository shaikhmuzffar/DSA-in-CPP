#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> arr;

    // varies in accordance with compiler
    // int ans = (sizeof(arr)/sizeof(int));
    // cout<<ans;

    // insert into vector
    // arr.push_back(5);
    // arr.push_back(8);

    // size and capacity
    // cout<<"size of arr::"<<arr.size()<<endl;
    // cout<<"capacity of arr::"<<arr.capacity()<<endl;

    //  way to initialize vector

    // static value
    // vector <int> brr(10,5);

    // dynamic value
    int n;
    cin>>n;
    vector<int> crr(n,23);

    // static 2
    vector <int> drr{10,20,30,40};
    cout<<endl;
    cout<<"printing vector"<<endl;
    for(int i=0;i<drr.size();i++){
        cout<<crr[i]<<" ";
    }

    return 0;
}