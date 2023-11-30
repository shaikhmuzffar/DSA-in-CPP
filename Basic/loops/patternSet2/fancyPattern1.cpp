#include <iostream>

using namespace std;

int main(){
    int n=10;
    // upper part
    for(int row = 0; row <n;row++){
        for(int ptn = 0; ptn<row+1;ptn++){
            cout<<row+1;
            if(ptn!=row){
                cout<<"*";
            }
        }
        cout<<endl;
    }

// lower part
for(int row=0;row<n;row++){
    for(int ptn=0;ptn<n-row;ptn++){
        cout<<n-row;
        if(ptn!=n-row-1){
        cout<<"*";
        }
    }
    cout<<endl;
}
    return 0;
}