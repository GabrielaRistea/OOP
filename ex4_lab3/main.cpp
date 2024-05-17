#include "functii.h"

int main()
{
    // Generate random numbers
    srand(static_cast<unsigned>(time(nullptr))); 

    // Create an array of balls
    const int BallsNumber = 49;
    Lotto balls[BallsNumber];

    // Extract 6 balls
    for (int i = 0; i < 6; ++i) {
        int index;
        do {
            index = rand() % BallsNumber;
        } while (balls[index].isExtracted());

        balls[index].extract();
    }

    // Display the extracted balls
    cout << "The extracted balls: ";
    for (int i = 0; i < BallsNumber; ++i) {
        if (balls[i].isExtracted()) {
            cout << balls[i].getNumber() << " ";
        }
    }
    cout << endl;

    return 0;
}