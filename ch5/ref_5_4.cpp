#include <iostream>


void getNumbers(int& input1, int& input2);
// Reads two integers from the keyboard.

void swapValues(int& variable1, int& variable2);
// Interchanges the values of variable1 and variable2.

void viewOrder(int& n1, int& n2);
// Displays the values of n1 and n2 in ascending order.

void showResults(int output1, int output2);
// shows the values of variable1 and variable2, in that order.

int main(){
    int firstNum = 0, secondNum = 0;

    getNumbers(firstNum, secondNum);
    swapValues(firstNum, secondNum);
    showResults(firstNum, secondNum);
}

void getNumbers(int& input1, int& input2){
    std::cout << "Enter two integers: ";
    std::cin >> input1 >> input2;
}

void viewOrder(int& n1, int& n2){
    if(n1 > n2){
        swapValues(n1, n2);
    }
}

void swapValues(int& variable1, int& variable2){
    int temp = variable1; // Store the value of variable1 in a temporary variable.
    variable1 = variable2; // Assign the value of variable2 to variable1.
    variable2 = temp; // Assign the value stored in temp to variable2.
}

void showResults(int output1, int output2){
    std::cout << "The values after swapping are: " << output1 << " and " << output2 << std::endl;
}