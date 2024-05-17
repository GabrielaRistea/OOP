#include "functii.h"

// Function for extracting a ball
void Lotto::extract() 
{
    if (!this->extracted) {
        this->number = generateRandomNumber();
        this->extracted = true;
    }
}

// Verify if the ball was extracted
bool Lotto::isExtracted() const 
{
    return this->extracted;
}

// Return the ball's number
int Lotto::getNumber() const {
    return number;
}

// Generate random number
int Lotto::generateRandomNumber() {
    return rand() % 49 + 1;
}