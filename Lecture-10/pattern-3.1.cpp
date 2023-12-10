#include <iostream>
using namespace std;

int main(){
    // Pattern to be printed Using 2nd Approach (Optimal)
    //     * * * * * * * * *
    //       * * * * * * *
    //         * * * * *
    //           * * *
    //             *

    int row, col, n;
    cout << "Enter the n:";
    cin >> n;

    for(row = n; row >= 1; row--){

        // Space Print
        for(col = 1; col <= (n-row); col++){
            cout << "  ";
        }

        // Star(*) Print
        for(col = 1; col <= ((2*row)-1); col++){
            cout << "* ";
        }
        cout << endl;
    }
}