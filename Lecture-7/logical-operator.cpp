#include <iostream>
using namespace std;

int main(){
    // Logical Operators
    // && || !

    int a, b, c;
    cout << "Enter the value of a, b and c: ";
    cin >> a >> b >> c;

    // And && Operator
    if(a > b && a > c){
        cout << "a is largest \n";
    }    
    else{
        cout << "a is not largest \n";
    }

    // Or || Operator (Vowel or consonant check)
    char ch;
    cout << "Enter character: ";
    cin >> ch;

    if(ch =='a' || ch =='e' || ch =='i' || ch =='o' || ch =='u'){
        cout << "Vowel \n";
    }
    else{
        cout << "consonant \n";
    }

    // Not ! Operator
    cout << !50 <<endl;
    cout << !0 <<endl;
}