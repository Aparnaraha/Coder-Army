#include <iostream>
using namespace std;

int main(){
    // Program to print the Factors of given number

    int n, k = 1;
    cout << "Enter n: ";
    cin >> n;

    while(k <= n){

        if(n % k == 0){
            cout << k << " ";
        }
        k++;
        
    }
}