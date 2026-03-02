#include <iostream>


const int SIZE = 6;

int outOfOrder(const double orderedNumbers[], int size);
// returns the first index that is not in order according the algorithm
// prev value[i] <= next value[i + 1]. It return -1 if nothing is found

int main(){
    double numbers[SIZE] = {3.2, 3.9, 4.5, 6.0, 4.0, 9.0};
    int index = outOfOrder(numbers, SIZE);

    if(index >= 0){
        std::cout << "The out of bounds index was: " << index;
    }
    else{
        std::cout << "There were no out of bound values.";
    }
    return 0;
}

int outOfOrder(const double orderedNumbers[], int size){
    int index = -1;
    int prev, current;

    prev = orderedNumbers[0];
    for(int i = 0; i < size; i++){
        current = orderedNumbers[i];
        if(current < prev){
            index = i;
            break;
        }
        prev = orderedNumbers[i];
    }

    return index;
}