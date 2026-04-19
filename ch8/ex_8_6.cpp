#include <iostream>
#include <string>


int main(){
    std::string firstName, lastName;

    std::cout << "Enter you first and last name: \n";
    std::cin >> firstName >> lastName;

    std::cout << "You last name is spelled:\n";
    int i;
    for(i = 0; i < lastName.length(); i++){
        std::cout << lastName[i] << " ";
        lastName[i] = '-';
    }
    std::cout << std::endl;
    for(i = 0; i < lastName.length(); i++){
        std::cout << lastName[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Good day " << firstName << std::endl;
    return 0;
}
