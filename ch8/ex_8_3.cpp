#include <iostream>
#include <cstdlib>
#include <cctype>

void readAndClean(int& n);

void newLine();

void getInt(int& inputNumber);

int main(){
    int inputNumber;
    getInt(inputNumber);
    std::cout << "Final value read in = " << inputNumber << std::endl;
    return 0;
}

void getInt(int& inputNumber){
    char ans;
    do{
        std::cout << "Enter input number: ";
        readAndClean(inputNumber);
        std::cout << "You entered " << inputNumber
                << " Is that correct? (yes/no): ";
        std::cin >> ans;
        newLine();
    } while((ans != 'y') && (ans != 'Y'));
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
    n = std::atoi(digitString);
}

void newLine(){
    char symbol;
    do{
        std::cin.get(symbol);
    } while(symbol != '\n');
}
