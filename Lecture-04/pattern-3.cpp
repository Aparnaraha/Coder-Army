#include <iostream>
using namespace std;

int main(){
    // Pattern to be printed:
    // 1 2 3 4 5
    // 1 2 3 4 5
    // 1 2 3 4 5
    // 1 2 3 4 5
    // 1 2 3 4 5

    int n, row, col;
    cout << "Enter the n: ";
    cin >> n;

    for(row = 1; row <= n; row++){
        for(col = 1; col <= n; col ++){
            cout << col << " ";
        }
        cout << endl;
    }
}