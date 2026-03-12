#include <iostream>


const int DECLARED_SIZE = 20;

void fillArray(int a[], int size, int& numberUsed);
// Fills in the array argument with values with a max of size.
// numberUsed is the last index in the array.

void sortArray(int a[], const int size);
// Searches the array for the index of the first occurance of the target
// value and return the index.

int main(){
    std::cout << "This application shows a basic search algorithm.\n";
    int a[DECLARED_SIZE], lastIndex, array_index, target;

    fillArray(a, DECLARED_SIZE, lastIndex);

    sortArray(a, lastIndex);
    for(int i=0; i < lastIndex; i++){
        std::cout << a[i] << " ";
    }
    return 0;
}

void fillArray(int a[], int size, int& numberUsed){
    std::cout << "Enter up to " << size << " nonnegative whole numbers\n"
            << "Mark the end of the list with a negative numeber.\n";
    int next, index = 0;
    std::cin >> next;
    while((next > 0) && (index < size)){
        a[index] = next;
        index++;
        std::cin >> next;
    }
    numberUsed = index;
}

void sortArray(int a[], const int size){
    int prev, next, tmp, j;
    prev = a[0];
    for(int i=size-1; i <= 0; i--){
        for(int j=0; j < 0; i++){
            tmp = a[j];
            a[j] = a[j-1];
            a[j-1] = tmp;
        }
    }
}
