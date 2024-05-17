#include <iostream>
using namespace std;

int main(){
    // Program to sum of n natural numbers using do-while loop

    int k = 1, n;
    cout << "Enter n: ";
    cin >> n;
    int sum = 0;

    do{
        sum = sum + k; 
        cout << sum << endl;
        k++;
    }while(k <= n);
}