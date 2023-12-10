#include <iostream>
using namespace std;

int main(){
    // Pattern to be printed Using 1st Approach
    //     * * * * * * * * *
    //       * * * * * * *
    //         * * * * *
    //           * * *
    //             *

    int row, col;

    for(row = 1; row <= 5; row++){
        // Space Print
        for(col = 1; col <= (row-1); col++)
        cout << "  ";

        // Star (*) Print
        // Star printed using 9-(space*2) formula
        for(col = 1; col <= 9-((row-1)*2); col++)
        cout << "* ";

        cout << endl;
    }
}