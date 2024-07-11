// Author: Truong Pham
// Created July 10 2024
//
// Purpose of this program is to see if a credit card number is valid
// and find out what type of card it is, American Express, Visa, etc.

#include <iostream>
#include "validation.h"

int main () {

    std::string cardNum;

    std::cout << "Please enter your credit card number" << std::endl;

    std::cin >> cardNum;

    if(!isCardValid(cardNum)) {
        std::cout << "Invalid card number" << std::endl;
    }
    else {
        std::cout << "Valid card number" << std::endl;
    }
    
}