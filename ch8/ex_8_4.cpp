#include <iostream>
#include <string>


int main(){
    std::string phrase;
    // Two different ways to initialise strings
    std::string adjective("friend"), noun("ants");
    std::string wish = "Bon appetit!";

    // The string constant "I love" is a C string not a string object
    phrase = "I love " + adjective + " " + noun + "!";
    std::cout << phrase << std::endl << wish << std::endl;
    return 0;
}