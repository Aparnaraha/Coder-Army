#include <iostream>
using namespace std;

int main(){
    // Pattern to be printed:
    //          1
    //        2 1
    //      3 2 1
    //    4 3 2 1
    //  5 4 3 2 1

    int row, col, n;

    cout << "Enter the n: ";
    cin >> n; //Input the n

    for(row = 1; row <= n; row++){
        //space print 
        for(col = 1; col <= (n-row); col++){
            cout << "  ";
        }
        //Number print 
        for(col = row; col >= 1; col--){
            cout << col << " ";
        }
        cout << endl;
    }
}