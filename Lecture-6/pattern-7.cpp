#include <iostream>
using namespace std;

int main()
{
    // Pattern to be printed for nth time
    //            1
    //          1 2
    //        1 2 3
    //      1 2 3 4
    //    1 2 3 4 5

    int row, col, n;
    cout << "Enter n: ";
    cin >> n;

    for(row = 1; row <= n; row++){
        // Space Printing
        for(col = 1; col <= (n-row); col++){ //For Space Print
            cout << "  ";
        }
        // Number Printing
        for(col = 1; col <= row; col++){  //For Number Print
            cout << col << " ";
        }
        cout << endl;
    }

}