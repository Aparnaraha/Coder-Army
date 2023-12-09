#include <iostream>
using namespace std;

int main(){
    // Continue Statement

    int i = 1;

    while(i <= 10){

        if(i == 4) 
        break;      //Statement will break when reaches to 4

        cout << i << "\n";
        i++;
    }
}