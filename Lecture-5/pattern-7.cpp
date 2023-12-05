#include <iostream>
using namespace std;

int main(){
    // Pattern to be printed: My LOGIC
    // * * * * *
    // * * * *
    // * * *
    // * *
    // *

    int row, col;

    for(row = 5; row >= 1; row--){
        for(col = 1; col <= row; col++){
            cout << "* ";
        }
        cout << endl;
    }
}