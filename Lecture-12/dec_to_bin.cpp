#include <iostream>
using namespace std;

int main()
{
    // Program to convert Decimal Number to Binary Number

    int num;
    cout << "Enter Decimal Number: ";
    cin >> num;
    int rem, ans = 0, mul = 1;

    while(num > 0)
    {
        // Remainder Part
        rem = num % 2;  //Also write rem = num&1
        // Quotient Part
        num = num / 2;  //Also write num = num >> 1
        // Answer Part
        ans = rem*mul+ans;
        // Multiply Update
        mul = mul*10;
    }
    cout << "Binary Number: " << ans << endl;
}