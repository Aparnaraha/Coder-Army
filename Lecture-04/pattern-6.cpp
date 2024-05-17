#include <iostream>
using namespace std;

int main(void)
{
    // Pattern to be printed:
    // a b c d e f
    // a b c d e f
    // a b c d e f
    // a b c d e f
    // a b c d e f
    
    int row;
    char ch;

    for(row = 1; row <= 5; row++){
        for(ch = 'a'; ch <= 'f'; ch++){
            cout << ch << " ";
        }
        cout <<endl;
    }
}