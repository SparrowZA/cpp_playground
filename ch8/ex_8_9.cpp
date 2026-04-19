#include <iostream>
#include <vector>


int main(){
    std::vector<int> v;
    std::cout << "Enter a list of positive numbers.\n"
        << "Place a negative number at the end.\n";
    
    int next;
    std::cin >> next;
    while(next > 0){
        v.push_back(next);
        std::cout << next << " added. ";
        std::cout << "v.size() = " << v.size() << std::endl;
        std::cin >> next;
    }

    std::cout << "You entered:\n";
    for (unsigned int i = 0; i < v.size(); i++){
        std::cout << v[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}
