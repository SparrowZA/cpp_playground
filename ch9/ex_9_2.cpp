#include <iostream>

int main(){
    int *p1, *p2;

    // Create a new pointer variable for an integer
    // This is an address to an integer value
    p1 = new int;
    // Assign a value to the pointer integer
    // Using the address assign the value 42 to that address
    *p1 = 42;
    // Here we are assigning the address stored in p1 to p2
    p2 = p1;
    std::cout << "*p1 == " << *p1 << std::endl;
    // This will output the memory address of p1
    std::cout << "p1 == " << p1 << std::endl;
    std::cout << "*p2 == " << *p2 << std::endl;
    // This proves that the address in p1 is equal to the
    // address stored in p2
    std::cout << "p2 == " << p2 << std::endl;
    
    std::cout << "===========" << std::endl;

    // Here we assign a new value to the value stored in p2 which
    // is also the value stored in p1 because the address stored
    // in p1 is equal to address stored in p2
    *p2 = 53;
    std::cout << "*p1 == " << *p1 << std::endl;
    std::cout << "p1 == " << p1 << std::endl;
    std::cout << "*p2 == " << *p2 << std::endl;
    std::cout << "p2 == " << p2 << std::endl;
    
    std::cout << "===========" << std::endl;

    // We assign a new integer space to p1. This reserves a new 
    // memory address and assigns it to p1
    p1 = new int;
    // We assign the integer value of 88 to the integer stored
    // at the memory location stored by p1
    *p1 = 88;
    std::cout << "*p1 == " << *p1 << std::endl;
    std::cout << "p1 == " << p1 << std::endl;
    std::cout << "*p2 == " << *p2 << std::endl;
    std::cout << "p2 == " << p2 << std::endl;
    std::cout << "Done!";

    return 0;
}
