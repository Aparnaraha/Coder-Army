#include <iostream>
using namespace std;

int main(){
    char myChar;
    cout << "Enter your character to check it is vowel or consonant: ";
    cin >> myChar;

    // Condition to check vowel or consonant

    if(myChar == 'a'){
        cout << "VOWEL";
    }
    else if(myChar == 'e'){
        cout << "VOWEL";
    }
    else if(myChar == 'i'){
        cout << "VOWEL";
    }
    else if(myChar == 'o'){
        cout << "VOWEL";
    }
    else if(myChar == 'u'){
        cout << "VOWEL";
    }
    else{
        cout << "CONSONANTS";
    }

}