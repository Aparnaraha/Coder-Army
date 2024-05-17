#include <iostream>
using namespace std;

int main(){
    // Program to check whether the no. is Even or Odd?

    int number;     //Initialize the number variable
    cout << "Enter number to check Even or Odd: ";
    cin >> number;  //Input the number

    // Checking the number.
    
    if(number % 2 == 0){   //If number divided by 2 and leaves remainder zero.
        cout << "The Number is Even";  //Printing the statement
    }
    else{
        cout << "The Number is Odd";    //Printing the statement
    }
}