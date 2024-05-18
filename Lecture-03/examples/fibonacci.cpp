#include <iostream>
using namespace std;

int main(){
    // Program to Print n'th Fibonacci Series.
    // 0 1 2 3 5 8 13 21
    // 1 2 3 4 5 6 7  8
    
    int n, i, last = 0, previous = 1, current = 0;
    cout << "Enter the n: ";
    cin >> n;

    cout << "Fibonacci Series is: ";

    for(i = 1; i <= n; ++i){
        
        if(i == 1){
            cout<< 0 << " ";
            continue;
        }
        if(i == 2){
            cout << 1 << " ";
            continue;
        }
        
        current = previous + last;
        last = previous;
        previous = current;

        cout << current << ", ";
    } 
    return 0; 
}