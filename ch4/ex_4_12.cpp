#include <iostream>
using namespace std;


bool isEven(int number);
// Takes a positive integer and checks if the value
// is even and returns a boolean value reflecting
// that.

int main(){
    int number;

    cout << "Please enter an integer: ";
    cin >> number;

    if(isEven(number)){
        cout << number << " is even.";
    }
    else{
        cout << number << " is odd.";
    }

    return 0;
}

bool isEven(int number){
    if((number % 2) == 0){
        return true;
    }
    else{
        return false;
    }
}
