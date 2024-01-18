#include <iostream>

struct Marbles {
    // Member variables
    static const int maxMarbles = 100;
    int numMarbles;
    std::string* marbleArray;

    // Constructor to make array
    Marbles() : numMarbles(0) {
        marbleArray = new std::string[maxMarbles];
    }

    void addMarble(const std::string& marble) {
        if (numMarbles < maxMarbles) {
            marbleArray[numMarbles] = marble;
            numMarbles++;
            std::cout << "Marble added successfully!" << std::endl;
        } else {
            std::cout << "Cannot add marble." << std::endl;
        }
    }
};

int main() {
    Marbles myMarbles;

    myMarbles.addMarble("Red Marble");
    myMarbles.addMarble("Blue Marble");
    myMarbles.addMarble("Green Marble");
    for (int i = 0; i < myMarbles.numMarbles; ++i) {
            std::cout << myMarbles.marbleArray[i] << std::endl;
        }
    return 0;
}
