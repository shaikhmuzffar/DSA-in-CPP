#include <iostream>

using namespace std;

void evenOrodd(int num){
    if(num>0 && num%2==0){
        cout<<num<<" is even"<<endl;
    }else{
        cout<<num<<" is odd"<<endl;
    }
}

int main(){
    int n=100;
    for(int i=0;i<n;i++){
        evenOrodd(i);
    }
}