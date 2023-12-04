#include <iostream>
using namespace std;

int main(){
    int size = 10;
    int arr[10]={0,0,0,1,1,0,1,0,1,1};
    int zCount=0;
    int oCount=0;

    for(int i=0; i<size; i++){
        if(arr[i]==0){
            zCount++;
        }else{
            oCount++;
        }
    }
    cout<<"zCount: "<<zCount<<endl;
    cout<<"oCount: "<<oCount<<endl;

return 0;
}