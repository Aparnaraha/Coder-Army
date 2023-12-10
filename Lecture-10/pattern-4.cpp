#include <iostream>
using namespace std;

int main(){
    // Pattern to be printed
    // * * * * * * * * * * * *
    // * * * * *     * * * * *
    // * * * *         * * * *
    // * * *             * * *
    // * *                 * *
    // *                     *
    // *                     *
    // * *                 * *
    // * * *             * * *
    // * * * *         * * * *
    // * * * * *     * * * * *
    // * * * * * * * * * * * *

    int row, col, n;
    cout << "Enter the n: ";
    cin >> n;
    
    // First print the above half pattern
    for(row = n; row >= 1; row--){
        // Print * row times
        for(col = 1; col <= row; col++){
            cout << "* ";
        }

        // Print space
        for(col = 1; col <= (2*n)-(2*row);col++){
            cout << "  ";
        }

        // Print * row times
        for(col = 1; col <= row; col++){
            cout << "* ";
        }
        cout << endl;
    }

    // Second print the below half pattern
    for(row = 1; row <= n; row++){
        // Print * row times
        for(col = 1; col <= row; col++){
            cout << "* ";
        }

        // Print space
        for(col = 1; col <= (2*n)-(2*row);col++){
            cout << "  ";
        }

        // Print * row times 
        for(col = 1; col <= row; col++){
            cout << "* ";
        }
        cout << endl;
    }
}