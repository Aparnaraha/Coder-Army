#include <iostream>
using namespace std;

int main(void)
{
    // Program to print: 
    // a a a a a
    // b b b b b
    // c c c c c
    // d d d d d
    // e e e e e

    int row, col;

    for(row = 1; row <= 5; row++){
        for(col = 1; col <= 5; col ++){
            char name = 'a' + (row - 1);
            cout << name << " ";
        }
        cout << endl;
    }
}