// #Coder Army

#include <iostream>
using namespace std;

int main()
{
    // ------Valid TypeCasting------

    int a = 12;
    char b = 'k';
    a = b; // Assigning the value of 'b' to 'a'
    cout << "After typecasting value is: " << a <<endl;  //Stored 'ASCII value of 'k' ' 
    
    // ------Invalid TypeCasting------
    
    int integer = 102;
    char k = integer;
    cout << "Invalid Value of Typecasting is: " << k;  //It will only last digit value
}