#include <iostream>
using namespace std;

// For Loop Example
int main(){
    // Print 1 to n Odd numbers using for loop

    int number;
    cout << "Enter number: ";
    cin >> number;

    for(int i = 1; i <= number; i++){
        
        if(i % 2 == 1){
            cout << "ODD is: " << i <<endl;
        }

    }    
    
}