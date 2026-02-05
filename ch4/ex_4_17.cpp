// Illustrating overloading functions
#include <iostream>

double ave(double n1, double n2);
// Returns the average of two numbers n1 and n2.

double ave(int n1, int n2, int n3);
// Returns the average of three integers n1, n2, and n3.
int main (){
    using namespace std;
    cout << "The average of 2.0, 2.5, and 3.0 is "
        << ave(2.0, 2.5, 3.0) << endl;
    
    cout << "The average of 4.5, 5.5 "
        << "is " << ave(4.5, 5.5) << endl;
    return 0;
}

double ave(double n1, double n2){
    return (n1 + n2) / 2.0;
}

double ave(int n1, int n2, int n3){
    return (n1 + n2 + n3) / 3.0;
}