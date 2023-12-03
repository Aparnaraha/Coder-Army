#include <iostream>
using namespace std;

int main(){
    // Pattern to be printed:
    // 5 4 3 2 1
    // 5 4 3 2 1
    // 5 4 3 2 1
    // 5 4 3 2 1
    // 5 4 3 2 1

    int n, row, col;
    cout << "Enter the n: ";
    cin >> n;

    for(row = 1; row <= n; row++){
        for(col = n; col >= 1; col --){
            cout << col << " ";
        }
        cout << endl;
    }
}