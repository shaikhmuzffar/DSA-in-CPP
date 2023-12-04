#include <iostream>
#include <limits.h>
using namespace std;

int main(){
    int size = 10;
    int arr[10]={9,2,3,5,1,7,1,60,4,0};
    int grt=INT_MIN;

    for(int i=0; i<size; i++){
        if(grt<arr[i]){
            grt=arr[i];
        }
    }
    cout<<"grt: "<<grt<<endl;


return 0;
}