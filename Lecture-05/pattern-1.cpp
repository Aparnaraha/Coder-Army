#include <iostream>
using namespace std;

int main(){
    
    // Pattern to be printed
    // *
    // * *
    // * * *
    // * * * *
    // * * * * *
    // * * * * * *
    // * * * * * * * 
    // * * * * * * * *

    int row, col, n;
    cout << "Enter the value of n: ";
    cin >> n;

    for(row =1 ; row <= n; row++){
        for(col = 1; col <= row; col++){
            cout << "* ";
        }
        cout << endl;
    }
}