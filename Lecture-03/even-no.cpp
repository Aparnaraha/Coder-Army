#include <iostream>
using namespace std;

// For Loop Example
int main(){
    // Print 1 to n Even numbers using for loop

    int number;
    cout << "Enter number: ";
    cin >> number;

    for(int i = 2; i <= number; i++){
        
        if(i % 2 == 0){
            cout << "Even is: " << i <<endl;
        }

    }    
    
}