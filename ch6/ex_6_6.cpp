#include <fstream>
#include <iostream>
#include <cstdlib>
#include <iomanip>  // needed for setw
// using namespace std;

void makeNeat(std::ifstream& messyFile, std::ofstream& neatFile,
        int numberAfterDecimalPoint, int filedWidth);
        
int main(){
    std::ifstream fin;
    std::ofstream fout;

    fin.open("rawdata.dat");
    if(fin.fail()){
        std::cout << "Input file opening failed.\n";
        exit(1);
    }
    fout.open("neat.dat");
    if(fout.fail()){
        std::cout << "Output file opening failed.\n";
        exit(1);
    }

    makeNeat(fin, fout, 5, 12);

    fin.close();
    fout.close();

    std::cout << "End program.\n";
    return 0;
}

void makeNeat(std::ifstream& messyFile, std::ofstream& neatFile,
        int numberAfterDecimalPoint, int fieldWidth){
    neatFile.setf(std::ios::fixed);
    neatFile.setf(std::ios::showpoint);
    neatFile.setf(std::ios::showpos);
    neatFile.precision(numberAfterDecimalPoint);
    std::cout.setf(std::ios::fixed);
    std::cout.setf(std::ios::showpoint);
    std::cout.setf(std::ios::showpos);
    std::cout.precision(numberAfterDecimalPoint);

    double next;
    while(messyFile >> next){
        std::cout << std::setw(fieldWidth) << next << std::endl;
        neatFile << std::setw(fieldWidth) << next << std::endl;
    }
}