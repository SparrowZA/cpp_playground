#include <iostream>


void fillUp(int a[], int size);

int main(){
    int score[5];

    fillUp(score, 5);

    return 0;
}

void fillUp(int a[], int size){
    std::cout << "Enter " << size << " numbers:\n";
    for(int i = 0; i < size; i++){
        std::cin >> a[i];
    }
    size--;
    std::cout << "The last array index used is " << size << std::endl;
}