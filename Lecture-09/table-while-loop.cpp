#include <iostream>
using namespace std;

int main(){
    // Table of n using while loop

    int i = 1, n;
    cout << "Enter the value of n: ";
    cin >> n;

    while(i <= 10){
        cout << n << " " << "X " << i << " = " << i*n;
        cout << endl;
        i = i + 1;
    }
}