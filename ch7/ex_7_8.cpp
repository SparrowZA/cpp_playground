#include <iostream>


const int MAX_NUMBER_SCORES = 10;

void fillArray(int a[], int size, int& numberUsed);

double computeAverage(const int a[], int numberUsed);

void showDifference(const int a[], int numberUsed);

int main(){
    int score[MAX_NUMBER_SCORES], numbersUsed;

    std::cout << "This program reads golf scores and shows\n"
              << "how much each differes from the average.\n";

    std::cout << "Enter fold scores:\n";
    fillArray(score, MAX_NUMBER_SCORES, numbersUsed);
    showDifference(score, numbersUsed);
    return 0;
}

void fillArray(int a[], int size, int &numberUsed){
    std::cout << "enter up to " << size << " nonnegative whole numbers.\n";
    int next, index = 0;
    std::cin >> next;
    while((next >= 0) && (index < size)){
        a[index] = next;
        index++;
        std::cin >> next;
    }
    numberUsed = index;
}

double computeAverage(const int a[], int numberUsed){
    double total = 0;
    for(int index = 0; index < numberUsed; index++){
        total += + a[index];
    }
    if(numberUsed > 0){
        return (total / numberUsed);
    }
    else{
        std::cout << "ERROR: number of elements is 0";
        return 0.0;
    }
}

void showDifference(const int a[], int numberUsed){
    double average = computeAverage(a, numberUsed);
    std::cout << "Average of the " << numberUsed << " scores = "
              << average << std::endl << "The scores are:\n";
    for(int index = 0; index < numberUsed; index++){
        std::cout << a[index] << " differs from average by "
                  << (a[index] - average) << std::endl;
    }
}
