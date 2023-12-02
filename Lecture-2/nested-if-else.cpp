#include <iostream>
using namespace std;

int main(){
    int myNumber;
    cout << "Enter your Number: ";
    cin >> myNumber;  //Input number;

    // Condition to check that the number is greater than or less than 0 or equal to zero

    if(myNumber > 0){
        cout << "Number is Positive";
    }
    else if(myNumber == 0){
        cout << "Number is Equal to Zero";
    }
    else{
        cout << "Number is Negative";
    }
}