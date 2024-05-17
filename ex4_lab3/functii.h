#pragma once
#include <iostream>
#include <stdlib.h>
#include<ctime>
using namespace std;

class Lotto {
private:
    int number;
    bool extracted;
    int generateRandomNumber();

public:
    Lotto() {
        number = 0;
        extracted = false;
    }

    void extract();

    bool isExtracted() const;

    int getNumber() const;

};