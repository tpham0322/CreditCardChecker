#include "validation.h"

bool checkSize(std::string card) {
    if(card.length() != 16) {
        
        std::cout << "Invalid length, should be 16 digits" << "\n";
        return false;
    }
    return true;
}

int isCardValid(std::string card) {

    if(!checkSize(card)) {
        return 0;
    }

    int res = 0;

    for(int i = 0; i < card.length() - 1; i + 2){
        res = res + i * 2;
    }

    for(int i = 1; i < card.length() - 1; i + 2)
    {
        res = res + i;
    }

    return 0;

}