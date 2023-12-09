#include <iostream>
using namespace std;

int main(){
    // Continue Statement:-

    int i = 1;
    while(i <= 10){

        if(i == 4){
            i++;
            continue;
        }
        cout << i << endl;
        i++;
    }

}