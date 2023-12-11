#include <iostream>
using namespace std;

int main(){
    int n, sum, i;
    cout << "Enter the n: ";
    cin >> n;

    sum = 0;  //Initialized the sum = 0
    for(i = 1; i <= n; i++){
        sum = sum + i;
    }
    cout << "The sum of " << n << " natural number is: " << sum;
}
