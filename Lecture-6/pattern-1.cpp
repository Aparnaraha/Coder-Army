#include <iostream>
using namespace std;

int main()
{
    // Pattern to be printed for nth time
    //            *
    //          * *
    //        * * *
    //      * * * *
    //    * * * * *

    int row, col, n;
    cout << "Enter n: ";
    cin >> n;

    for(row = 1; row <= n; row++){
        for(col = 1; col <= (n-row); col++){ //For Space Print
            cout << "  ";
        }
        for(col = 1; col <= row; col++){  //For Star(*) Print
            cout << " *";
        }
        cout << endl;
    }

}