#include <iostream>
using namespace std;

int main(){
    // Program to print power of n(base)
    int n, pow, i, num;
    cout << "Enter the Base: ";
    cin >> n;
    cout << "Enter the power: ";
    cin >> pow;
    num = n;
    for(i = 1; i < pow; i++){
        num = num*n;
    }
    cout << num;
}