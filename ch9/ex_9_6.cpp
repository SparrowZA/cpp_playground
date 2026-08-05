// sorts a list of numbers entered at the keyboard
#include <iostream>
#include <cstdlib>
#include <cstddef>

typedef int* IntArrayPtr;

void fillArray(int a[], int size);
// Precondition: size is the size of the array a.
// Postcondition: a[0] through a[size - 1] have been
// filled with values read from the keyboard.

void sort(int a[], int size);
// Precondition: size is the size of the array a.
// the array elements a[0] through a[size -1] have values.
// Postcondition: The values of a[0] through a[size - 1] have been rearranged
// so that a[0] <= a[1] <= ... <= a[size - 1]

int main(){
    using namespace std;
    cout << "This program sorts numbers from lowest to highest.\n";

    int array_size;
    cout << "How many numbers will be sorted?";
    cin >> array_size;

    IntArrayPtr a;
    a = new int[array_size];

    fillArray(a, array_size);
    sort(a, array_size);

    cout << "In sorted order the numbers are: \n";
    for(int i=0; i < array_size; i++){
        cout << a[i] << " ";
    }
    cout << endl;

    delete [] a;

    return 0;
}