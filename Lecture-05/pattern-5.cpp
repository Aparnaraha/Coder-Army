#include <iostream>
using namespace std;

int main(){
    // Pattern to be printed:
    // a
    // b b
    // c c c
    // d d d d
    // e e e e e

    int row, col;
    char name;

    for(row = 1; row <= 5; row++){
        for(col = 1; col <= row; col++){
            name = 'a'+(row-1);
            cout << name << " ";
        }
        cout << endl;
    }
}