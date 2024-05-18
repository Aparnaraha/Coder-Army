#include <iostream>
using namespace std;

int main(){
    // post increament and pre increamemt
    int a = 10;

    cout << a++ <<endl; //Print 10 as it assign older value first

    cout << a << endl; //Now, print 11 as value of a is increamented by +1 //Print 10 as it assign older value first

    // post decreament and pre decreament
    cout << "Pre Decreament ";
    int b = 10;

    cout << --b <<endl; //Print 9 as it is assign older value first

    cout << b << endl; //Now, print 11 as value of a is increamented by +1 //Print 10 as it assign older value first
    
}