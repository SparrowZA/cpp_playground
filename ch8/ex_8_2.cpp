#include <iostream>
#include <cstdlib>
#include <cctype>


void readAndClean(int& n);
// Reads a line of input. Discards all symbols except the digits.
// converts the C string to an integer and sets n equal to the value
// of this integer.

void newLine();
// Discards all the inpur remaining on the current input line.
// also discards the '\n' at the end of the line.

int main(){
    int n;
    char ans;

    do{
        std::cout << "enter an integer and press return: ";
        readAndClean(n);
        std::cout << "That string converts to the integer " << n << std::endl;
        std::cout << "Again? (yes/no): ";
        std::cin >> ans;
        newLine();
    } while((ans != 'n') && (ans != 'N'));
    return 0;
}

void readAndClean(int& n){
    const int ARRAY_SIZE = 6;
    char digitString[ARRAY_SIZE];

    char next;
    std::cin.get(next);
    int index = 0;
    while(next != '\n'){
        if((std::isdigit(next)) && (index < ARRAY_SIZE - 1)){
            digitString[index] = next;
            index++;
        }
        std::cin.get(next);
    }
    digitString[index] = '\0';
    // atoi - converts an int character to the representative int
    n = std::atoi(digitString);
}

void newLine(){
    char symbol;
    // This function will read each character in the cin stream
    // until a newline character from the enter key is reached.
    do{
        std::cin.get(symbol);
    } while(symbol != '\n');
}
