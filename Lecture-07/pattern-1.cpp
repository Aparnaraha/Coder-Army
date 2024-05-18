#include <iostream>
using namespace std;

int main()
{
    // Pattern to be printed
    //          *
    //        * * *
    //      * * * * *
    //    * * * * * * *
    //  * * * * * * * * *

    int row, col, n;
    cout << "Enter the value of n: ";
    // input n;
    cin >> n;

    for(row = 1; row <= n; row++){
        // Space print
        for(col = 1; col <= (n-row); col++){
            cout << "  ";
        }
        // Star Print
        for(col = 1; col <= (2*row)-1; col++){
            cout << "* ";
        }
        cout << endl;
    }
}