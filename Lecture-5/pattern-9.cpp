#include <iostream>
using namespace std;

int main(){
    // Pattern to be printed:
    // 1 2 3 4 5
    // 1 2 3 4
    // 1 2 3
    // 1 2
    // 1

    int row, col;

    for(row = 5; row >= 1; row--){
        for(col = 1; col <= row; col++){
            cout << col << " ";
        }
        cout << endl;
    }
}