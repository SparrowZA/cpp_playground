#include <iostream>
#include <string>


void newLine();

int main(){
    std::string firstName, lastName, recordName;
    std::string motto = "Your records are our records.";

    std::cout << "Enter your first and last name:\n";
    std::cin >> firstName>>lastName;    
    newLine();

    recordName = lastName + ", " + firstName;
    std::cout << "your name in our records is: ";
    std::cout << recordName << std::endl;

    std::cout << "Our motto is\n"
            << motto << std::endl;
    std::cout << "Please suggest a better (one-line) motto:\n";
    getline(std::cin, motto);
    std::cout << "Our new motto will be:\n";
    std::cout << motto << std::endl;

    return 0;
}

void newLine(){
    char nextChar;
    do{
        std::cin.get(nextChar);
        // The while checks for the end of the string
    }while(nextChar != '\n');
}
