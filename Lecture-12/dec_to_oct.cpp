
#include <iostream>
using namespace std;

int main()
{
    // Program to convert Decimal to Octal Number.

    int num;
    int ans = 0, rem, mul = 1;
    cout << "Enter Decimal Number: ";
    cin >> num;

    while(num > 0)
    {
        // Modulus with 8
        rem = num % 8;
        // Divide by 8
        num = num / 8;
        // Answer
        ans = rem * mul + ans;
        
        mul *= 10;
    }
    cout << "Octal Number:" << ans << endl;
}
