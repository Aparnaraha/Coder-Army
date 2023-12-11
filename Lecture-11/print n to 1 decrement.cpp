#include <iostream>
using namespace std;

int main(){
    // Print number from 'n' to 1 (decending order)
    int n;
    cout << "Enter n: ";
    cin >> n;
    for(int i = 1; n >= i; n--){
        cout << n <<endl;
    }
}