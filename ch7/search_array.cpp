#include <iostream>


const int DECLARED_SIZE = 20;

void fillArray(int a[], int size, int& numberUsed);
// Fills in the array argument with values with a max of size.
// numberUsed is the last index in the array.

int findValue(const int a[], const int size, const int target);
// Searches the array for the index of the first occurance of the target
// value and return the index.

int main(){
    std::cout << "This application shows a basic search algorithm.\n";
    int a[DECLARED_SIZE], lastIndex, array_index, target;

    fillArray(a, DECLARED_SIZE, lastIndex);

    std::cout << "Please enter a target to look for: ";
    std::cin >> target;

    array_index = findValue(a, lastIndex, target);
    if(array_index == -1){
        std::cout << "Value not found in the araray";
    }
    else{
        std::cout << "The value of " << target << " was found at index " << array_index;
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

int findValue(const int a[], const int size, const int target){
    for(int i=0; i < size; i++){
        if(a[i] == target){
            return i;
        }
    }
    return -1;
}
