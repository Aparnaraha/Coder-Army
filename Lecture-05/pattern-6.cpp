#include <iostream>
using namespace std;

int main(){
    // Pattern to be printed:
    // * * * * *
    // * * * *
    // * * *
    // * *
    // *

    int row, col;

    for(row = 1; row <= 5; row++){
        for(col = 1; col <= 5-(row-1); col++){
            cout << "* ";
        }
        cout << endl;
    }
}