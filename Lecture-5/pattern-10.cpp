#include <iostream>
using namespace std;

int main(){
    // Pattern to be printed:
    // 5
    // 5 4
    // 5 4 3
    // 5 4 3 2
    // 5 4 3 2 1

    int row, col;

    for(row = 5; row >= 1; row--){
        for(col = 5; col >= row; col--){
            cout << col << " ";
        }
        cout << endl;
    }
}