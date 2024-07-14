// Header file for validation and type
#include <iostream>

bool checkSize(std::string &card);

bool luhnValid(std::string &card);

bool isCardValid(std::string &card);

std::string cardType(std::string &card);