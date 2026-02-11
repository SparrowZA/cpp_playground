#include <iostream>

void getInput(int &num1);

int main(){
    int myNum1;
    getInput(myNum1);
    std::cout << "You entered: " << myNum1 << std::endl;
    return 0;
}

void getInput(int &num1){
    std::cout << "Enter a whole number: ";
    std::cin >> num1;
}