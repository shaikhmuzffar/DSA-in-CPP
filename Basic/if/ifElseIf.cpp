#include <iostream>
using namespace std;

int main(){
    int party1 = 120;
    int party2 = 130;
    if(party1 > party2){
        cout<<"party1 wins";
    }else if(party1< party2){
        cout<<"party2 wins";
    }else{
        cout<<"this is tie";
    }
    return 0;
}