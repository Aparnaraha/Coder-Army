#include <iostream>
using namespace std;

int main(){
    int myMarks;
    cout << "Enter your Marks: ";
    cin >> myMarks;
    
    if(myMarks > 33){
        cout << "Congratulations, You are PASS!";
    }
    else{
        cout << "OOPS! You are FAIL!";
    }
}