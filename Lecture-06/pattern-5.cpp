#include <iostream>
using namespace std;

int main(){
    // Pattern to be printed:
    //          A
    //        A B
    //      A B C
    //    A B C D
    //  A B C D E

    int row, col, n;
    char ch;

    cout << "Enter the n: ";
    cin >> n; //Input the n

    for(row = 1; row <= n; row++){
        //space print 
        for(col = 1; col <= (n-row); col++){
            cout << "  ";
        }
        //Character print 
        for(ch = 'A'; ch <= 'A'+(row-1); ch++){
            cout << ch << " ";
        }
        cout << endl;
    }
}