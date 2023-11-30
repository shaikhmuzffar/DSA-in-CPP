#include <iostream>

using namespace std;

int sumOf(int n){
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if(i%2==0){
        sum += i;
        }
    }
    return sum;
}

int main()
{
    int num;
    cout << "enter number:" << endl;
    cin >> num;
    int result = sumOf(num);
    cout << "sum of " << num << " is :" << result;
    return 0;
}