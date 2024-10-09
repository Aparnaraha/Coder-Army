#include <iostream>
using namespace std;

int main()
{
    // Program to convert Binary to Octal Number.
    // First Convert Binary to Decimal.
    // Then Convert Decimal to Octal.

    // 1. Converting Binary to Decimal.
    int num;
    int ans = 0, rem, mul = 1;
    cout << "Enter Binary Number: ";
    cin >> num;

    while(num > 0)
    {
        // Modulus with 10
        rem = num % 10;
        // Divide by 10
        num = num / 10;
        // Answer
        ans = rem * mul + ans;
        
        mul *= 2;
    }

    // Now Converting Decimal to Octal
    int num_2 = ans;  //Assigning previous 'ans' value to num_2
    int ans_2 = 0, rem_2, mul_2 = 1;

    while(num_2 > 0)
    {
        // Modulus with 8
        rem_2 = num_2 % 8;
        // Divide by 8
        num_2 = num_2 / 8;
        // Answer
        ans_2 = rem_2 * mul_2 + ans_2;
        
        mul_2 *= 10;
    }
    cout << "Octal Number: " << ans_2 << endl;
}