#include <iostream>
using namespace std;

int main(){
    // Local Scope
    int x = 2; //local Scope
    cout << x;

    {
        int k = 50; //Scope is VALID to this Function ONLY
    }
}