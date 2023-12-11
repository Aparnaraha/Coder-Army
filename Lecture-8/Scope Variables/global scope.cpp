#include <iostream>
using namespace std;

int y = 25; //Global Scope (Scope is Valid to Whole Program)

int main(){
    int x = 52; //Global Scope for only this Block/Function
    cout << x;
}