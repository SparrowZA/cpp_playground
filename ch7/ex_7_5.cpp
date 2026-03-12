#include <iostream>

const int NUMBER_OF_PLANTS = 4;

void inputData(int a[], int lastPlantNumber);

void scale(int a[], int size);

void graph(const int asteriskCount[], int lastPlantNumber);

int main(){
    int production[NUMBER_OF_PLANTS];

    std::cout << "This program displays a graph showing\n"
            << "production for each plant in the company.";

    inputData(production, NUMBER_OF_PLANTS);
    scale(production, NUMBER_OF_PLANTS);
    graph(production, NUMBER_OF_PLANTS);
    return 0;
}