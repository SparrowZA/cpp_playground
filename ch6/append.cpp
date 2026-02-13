#include <fstream>
#include <iostream>


int main(){
    // Create output stream
    std::ofstream outStream;
    std::cout << "Opening data.dat file ";
    outStream.open("data.dat", std::ios::app);
    // Check if the stream failed to open the file
    if(outStream.fail()){
        std::cout << "Input file opening failed!\n";
        exit(1);
    }

    outStream << "5 6 pick up sticks.\n"
         << "7 8 ain't C++ great!\n";

    outStream.close();
    std::cout << "End Program";
    return 0;
}