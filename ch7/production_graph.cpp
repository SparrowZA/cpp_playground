#include <iostream>
#include <cmath>


const int NUMBER_OF_PLANTS = 4;

void inputData(int plants[], int plantsSize);
// Gets input data information
int getTotal();
// Prompts the user to input the production numbers terminated by a negative numbers
void calculateGraphValues(int plants[], int plantsSize);
// Calculates the number of astricks to place in the graphs
void displayGraphs(int plants[], int plantsSize);
// Takes graph data and plots it onto the console

int main(){
    int manufacturingNumbers[NUMBER_OF_PLANTS];
    inputData(manufacturingNumbers, NUMBER_OF_PLANTS);

    calculateGraphValues(manufacturingNumbers, NUMBER_OF_PLANTS);

    displayGraphs(manufacturingNumbers, NUMBER_OF_PLANTS);

    return 0;
}

void inputData(int plants[], int plantsSize){
    for(int i = 0; i < plantsSize; i++){
        plants[i] = getTotal();
    }
}

int getTotal(){
    int sum = 0, tmp;
    std::cout << "Please enter the production numbers for each department:\n";
    std::cin >> tmp;
    while (tmp >= 0){
        sum = sum + tmp;
        std::cin >> tmp;
    }
    std::cout << "Total: " << sum << std::endl;
    return sum;
}

void calculateGraphValues(int plants[], int plantsSize){
    for(int i = 0; i < plantsSize; i++){
        plants[i] = std::round(plants[i] / 1000.00);
    }
}

void displayGraphs(int plants[], int plantsSize){
    for(int i = 0; i < plantsSize; i++){
        std::cout << "Plant #" << i + 1 << " ";
        for(int j = 0; j < plants[i]; j++){
            std::cout << "*";
        }
        std::cout << "\n";
    }
}