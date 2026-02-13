#include <iostream>

const int THRESHOLD = 8;
const int LOW_MARKUP = 5;
const int HIGH_MARKUP = 10;

void getInput(float& price, int& days);
// Reads the price of an item and the number of days it has been on sale.
float applyMarkup(float price, int days);
// Calculates the markup value and applies it to the price of the product.
void displayPrice(float price);
// Display the price on the terminal screen
float calculateMarkup(float price, int percentage);
// Calculate the amount of markup on the product

int main(){
    float price;
    int days;

    getInput(price, days);
    price = applyMarkup(price, days);
    displayPrice(price);
}

void getInput(float& price, int& days){
    std::cout << "Enter the price of the item and expected days before sale: ";
    std::cin >> price >> days;
}

float applyMarkup(float price, int days){
    float markup;
    if(days < THRESHOLD){
        markup = calculateMarkup(price, LOW_MARKUP);
    }
    else{
        markup = calculateMarkup(price, HIGH_MARKUP);
    }
    return price + markup;
}

float calculateMarkup(float price, int percentage){
    return (price / 100.00) * percentage;
}

void displayPrice(float price){
    std::cout << "The price for the product should be set to: " << price;
}