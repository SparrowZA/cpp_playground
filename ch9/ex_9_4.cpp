// Program to demonstrate that an array variable is a kind of pointer variable
#include <iostream>

typedef int* IntPtr;

int main(){
    IntPtr p;
    int a[10];
    int index;
    for(index=0; index < 10; index++){
        a[index] = index;
    }
    
    p = a;
    for(index=0; index < 10; index++){
        std::cout << p[index] << " ";
    }
    std::cout << std::endl;

    for(index=0; index < 10; index++){
        p[index] = p[index] + 1;
    }

    for(index=0; index < 10; index++){
        std::cout << a[index] << " ";
    }
    std::cout << std::endl;

    return 0;
}