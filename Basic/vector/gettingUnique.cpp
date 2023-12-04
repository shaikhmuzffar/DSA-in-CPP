#include <iostream>
#include <vector>
using namespace std;

int findUnique(vector <int> arr){
    int res=0;
    for(int i=0; i<arr.size(); i++){
        res=res ^ arr[i];
    }
    return res;
}

int main(){

    int n;
    cout<<"enter size:"<<endl;
    cin>>n;

    vector <int> arr(n);

    for(int i=0; i<arr.size(); i++){
        cin>>arr[i];
    }

    int uniqueValues=findUnique(arr);

    cout<<"uniqueValues :"<<uniqueValues<<endl;



    return 0;
}