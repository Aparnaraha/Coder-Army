#include <iostream>
using namespace std;

int main(){
    // Precedence in C++

    // double > float > int
    // int/int = int,  float/int = float
    cout << 64*2/2;  //First multiply, then divide because of associativity rule

    cout << endl;

    cout << 34+20-4-5; //First add, then subtract because of associativity rule
    
}