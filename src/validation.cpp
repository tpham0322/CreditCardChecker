#include "validation.h"

bool checkSize(std::string card) {
    if(card.length() != 16) {
        
        std::cout << "Invalid length, should be 16 digits" << "\n";
        std::cout << card.length() << "lol" << std::endl;
        return false;
    }
    return true;
}

bool luhnValid(std::string card) {

    int res = 0;

    // Iterate over each digit from the rightmost side
    for (int i = card.length() - 1; i >= 0; i--) {
        int digit = card[i] - '0';

        // Double every second digit from the right
        if ((card.length() - i - 1) % 2 == 1) {
            digit *= 2;
            if (digit > 9) {
                digit -= 9;
            }
        }

        res += digit;
    }

    if (res % 10 != 0) {
        std::cout << "Fails to comply with Luhn algorithm" << std::endl;
        return false;
    }
    
    return true;

}

bool isCardValid(std::string card) {

    if(!checkSize(card)) {
        std::cout << "fail" << std::endl;
        return false;
    }

    if(!luhnValid(card)) {
        return false;
    }
    


    return true;

}