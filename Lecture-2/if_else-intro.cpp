#include <iostream>
using namespace std;

int main()
{
    // Statement- If Company Package is Greater than (>) 10 Lakhs than print 'Accepted' otherwise print 'Rejected'
    int Package;
    cout << "Enter the Package Value: ";
    cin >> Package;
    
    if(Package > 10){
        cout << "Accepted" << endl; //Print Accepted
    }
    else{
        cout << "Rejected" << endl; //Print Rejected
    } 

}