#include <iostream>
using namespace std;

int main(){
    // Pattern to be printed
    // *              *
    // * *          * *
    // * * *      * * *
    // * * * *  * * * *
    // * * *      * * *
    // * *          * *
    // *              *

    int row, col, n;
    cout << "Enter the value of n: ";
    cin >> n;

    // Pattern for above first Half
    for(row = 1; row <= n; row++){
        // Star (*) Print
        for(col = 1; col <= row; col++){
            cout << "* ";
        }
        // Space Print
        for(col = 1; col <= (2*n)-(2*row); col++){
            cout << "  ";
        }
        // Star Print
        for(col = 1; col <= row; col++){
            cout << "* ";
        }
        cout << endl;
    }

    // Pattern for below second Half
    for(row = n-1; row >= 1; row--){
        // Star Print
        for(col = 1; col <= row; col++){
            cout << "* ";
        }
        // Space Print
        for(col = 1; col <= (2*n)-(2*row); col++){
            cout << "  ";
        }
        // Star Print
        for(col = 1; col <= row; col++){
            cout << "* ";
        }
        cout << endl;
    }
}