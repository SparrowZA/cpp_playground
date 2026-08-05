#include <algorithm>

#include <iostream>
#include <string>
#include <utility>
#include <vector>
// using namespace std;


// template <typename T>
// std::vector<T> bubblesort(std::vector<T>& array);

template <typename T>
std::vector<T> bubblesort(std::vector<T>& array){
    int size = array.size();
    int pass_count = 0;
    bool swap_check = true;

    // for(int i=0; i < size; i++){
    //     for(int j=0; j < size - 1 - i; j++){
    //         pass_count++;
    //         if(array[j] > array[j + 1]){
    //             std::swap(array[j], array[j + 1]);
    //         }
    //     }
    // }

    for(int i=0; (i < size) && (swap_check); i++){
        swap_check = false;
        for(int j=0; j < size - 1 - i; j++){
            pass_count++;
            if(array[j] > array[j + 1]){
                swap_check = true;
                std::swap(array[j], array[j + 1]);
            }
        }
    }

    std::cout << "count: " << pass_count << std::endl;
    return array;
}

int main(){
    std::vector<int> t = {2, 1, 3, 4, 8, 27, 35, 39, 65, 90};
    t = bubblesort(t);
    for(int i=0; i < t.size(); i++){
        std::cout << t[i] << "\n";
    }
}
