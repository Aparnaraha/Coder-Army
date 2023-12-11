#include <iostream>
using namespace std;

int main(){
    // Program to Print Factorial of a number 'n'

    int n, fact, i;
    cout << "Enter the value of n: ";
    cin >> n;

    fact = 1;
    for(i = 1; i <= n; i++){
        fact = fact * i;
    }
    cout << "Factorial of " << n << " is: " << fact;
}