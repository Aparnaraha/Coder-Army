#include <iostream>
using namespace std;

int main(){
    // Bitwise Operators
    // &, |, ^, ~, <<, >>

    // and (&) Operator
    int ans_1 = 25 & 10;
    cout << "25 & 10 Output is " << ans_1 << endl;

    // or (|) Operator
    int ans_2 = 6 | 3;
    cout << "6|3 Output is " << ans_2 << endl;

    // Xor (^) Operator
    int ans_3 = 9 ^ 3;
    cout << "6|3 Output is " << ans_3 << endl;

    // Left Shift (<<) Operator
    int ans_4 = 7 >> 2;
    cout << " 7<<2 Output is " << ans_4 << endl;

    // Right Shift (>>) Operator
    int ans_5 = 25 >> 7;
    cout << " 25>>7 Output is " << ans_5 << endl;

    // Complement (~) Operator
    int ans_6 = ~25;
    cout << "~25 Output is " << ans_6 << endl;

}