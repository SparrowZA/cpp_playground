#include <fstream>
#include <iostream>
#include <cstdlib>
using namespace std;


void addPlusPlus(ifstream& inStream, ofstream& outStream);

int main(){
    ifstream fin;
    ofstream fout;
    cout << "Begin editing files.\n";
    fin.open("cad.dat");
    if(fin.fail()){
        cout << "Input file opening fail.\n";
        exit(1);
    }
    fout.open("cplusad.dat");
    if(fout.fail()){
        cout << "";
    }
    addPlusPlus(fin, fout);
    fin.close();
    fout.close();
    cout << "End of editing files.\n";

    return 0;
}

void addPlusPlus(ifstream& inStream, ofstream& outStream){
    char next;
    inStream.get(next);
    while(!inStream.eof()){
        if(next == 'C'){
            outStream << "C++";
        }
        else{
            outStream << next;
        }
        inStream.get(next);
    }
}
