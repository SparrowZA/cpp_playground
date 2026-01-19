#include <iostream>
using namespace std;

int main(int argc, char *argv[]){
    // This is a demo application that shows how to use doubles and cin
    // and how to set the display precision for doubles in cout

    double the_number;
    cout << "Enter an amount $";
    cin >> the_number;

    cout << "You entered $" << the_number << endl;
    // Setting double decimal precision on the cout
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    cout << "You entered $" << the_number << endl;
    return 0;
}