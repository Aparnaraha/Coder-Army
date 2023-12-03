#include <iostream>
using namespace std;

int main(){
    // Pattern to be printed:
    // * * * * * * 
    // * * * * * * 
    // * * * * * * 
    // * * * * * * 
    // * * * * * * 

    int n, i;
    cout << "Enter the n: ";
    cin >> n;

    for(i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cout << " * ";
        }
        cout << endl;
    }
}