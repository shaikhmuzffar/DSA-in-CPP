#include <iostream>

using namespace std;

void primeOrNot(int n){
    bool isPrime = true;  // Assume the number is prime initially
  if(n % i == 0){

    for(int i=2; i*i<=n; i++){
                  isPrime = false;  // If n is divisible by i, it's not a prime number
            break;  // No need to check further
        }
    }

    if(isPrime){
        cout << n << " is prime." << endl;
    } else {
        cout << n << " is not prime." << endl;
    }
}

int main(){
    int num;
    cout<<"enter number :";
    cin>>num;
    primeOrNot(num);
}