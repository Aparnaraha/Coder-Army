#include <iostream>
using namespace std;

int main(){
    // Program to print the table of n
    
    int n;
    cout << "Enter n to print table of it: ";
    cin >> n;

    for(int i = 1; i <= 10; i++){
        cout << n << " X " << i << " = " << i*n << endl;
    }
}
