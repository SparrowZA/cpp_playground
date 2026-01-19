#include <iostream>
using namespace std;

int main(int argc, char *argv[]){
    int num_1, num_2;
    cout << "Enter two whole numbers: ";
    cin >> num_1 >> num_2;

    int rem = num_1 % num_2;
    int div = num_1 / num_2;
    cout << "dividing the first number by the second number gets us:" << endl;

    cout << div << " remainder " << num_2;
    return 0;
}