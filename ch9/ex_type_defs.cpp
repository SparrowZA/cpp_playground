#include <iostream>
// We create a type definition for the pointer of
// type integer. This makes keeping track of pointers
// easier in the code as seen below.
typedef int *intPtr;


void addNumbers(intPtr &num1, int *&num2);

int main(){
    intPtr p1;
    int *p9;

    std::cout << "Start";

    /* You have to initialize the p1 and p9 variables
    with the new keyword. This assigns the memory location.
    Otherwise the assignment of the value is not a valid
    command (line 24-25) and will throw an exception
        "Unhandled exception thrown: write access violation.
        p1 was nullptr"
    */
    p1 = new int;
    p9 = new int;

    *p1 = 45;
    *p9 = 21;
    std::cout << "p1 == " << *p1 << std::endl;
    std::cout << "p2 == " << *p9 << std::endl;
    
    addNumbers(p1, p9);
    
    std::cout << "p1 == " << *p1 << std::endl;
    std::cout << "p2 == " << *p9 << std::endl;

    std::cout << "END";

    return 0;
}

void addNumbers(intPtr &num1, int *&num2){
    /* Note the difference in readability between the
    type definition intPtr and normal pointer when passing
    by reference.
    */
    *num1 = *num1 + *num2;
}