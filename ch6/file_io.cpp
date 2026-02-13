#include <iostream>
#include <fstream>
#include <cstdlib>


int main(){
    std::ifstream inStream;
    std::ofstream outStream;

    inStream.open("infile.dat");
    if(inStream.fail()){
        std::cout << "Input file opening failed\n";
        exit(1);
    }
    outStream.open("outfile.dat");
    if(outStream.fail()){
        std::cout << "Output file opening failed\n";
        exit(1);
    }

    int first, second, third;
    inStream >> first >> second >> third;
    outStream << "The sum of the first 4\n"
    << "numbers in infile.data\n"
    << "is " << (first + second + third)
    << std::endl;

    inStream.close();
    outStream.close();
    return 0;
}