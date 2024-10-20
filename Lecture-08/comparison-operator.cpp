#include <iostream>
using namespace std;

int main()
{
    // Comparison Operators
    // ( ==, >, <, >=, <=, != )

    // 1 or 0
    int a, b;
    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;

    // == Equal to operator
    if(a == b){
        cout << "A and B are Equal ";
    }
    else{
        cout << "Not Equal ";
    }

    // < Greater than or Smaller than operator
    if(a > b){
        cout << "A is Greater than B \n";
    }
    else{
        cout << "A is Smaller than B ";
    }

    // >= or <= Operator
    if(a >= b){
        cout << "A is Greater than B \n";
    }
    else{
        cout << "A is Smaller than B ";
    }

    // != Not Equal to
    if(a != b){
        cout << "True \n";
    }
    else{
        cout << "False ";
    }

}