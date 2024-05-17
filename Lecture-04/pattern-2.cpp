#include <iostream>
using namespace std;

int main(){
    // Pattern to be printed:
    // 1 1 1 1 1
    // 2 2 2 2 2
    // 3 3 3 3 3
    // 4 4 4 4 4
    // 5 5 5 5 5

    int n, row, col;
    cout << "Enter the n: ";
    cin >> n;

    for(row = 1; row <= n; row++){
        for(col = 1; col <= n; col ++){
            cout << row << " ";
        }
        cout << endl;
    }
}