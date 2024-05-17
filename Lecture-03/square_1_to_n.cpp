#include <iostream>
using namespace std;

// For Loop Example
int main(){
    // Print square of numbers from 1 to n
    int n;
    cout << "Enter n: ";
    cin >> n;

    for (int j = 1; j <= n; j++)//Print 5 times
    {
        cout << j << " = " << j*j << endl;
    }
    
}