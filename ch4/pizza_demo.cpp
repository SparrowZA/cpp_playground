#include <math.h>
#include <iostream>
using namespace std;


float getRadius(float diameter);
// Compute radius
float getArea(float radius);
float computePrice(float price, float area);

int main(){
    float PRICE = 7.5;
    float diameter;
    cout << "Please enter the size of the size: ";
    cin >> diameter;
    float radius = getRadius(diameter);
    cout << "The radius is " << radius << endl;
    
    float area = getArea(radius);
    cout << "The area is " << area << endl;

    float price = computePrice(PRICE, area);
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout << "The price of the pizza is " << price << endl;
    return 0;
}

float getRadius(float diameter){
    return diameter / 2;
}

float getArea(float radius){
    return M_PI * radius * radius;
}

float computePrice(float price, float area){
    return price / area;
}