//
// Created by Danny Teel on 1/26/20.
//
#include <iostream>

int main() {
    int roomCapacity, occupants, exclusions;

    std::cout << "What is the room capacity?\n";
    std::cin >> roomCapacity;

    std::cout << "How many current occupants are there?\n";
    std::cin >> occupants;

    if (occupants > roomCapacity) {
        exclusions = occupants - roomCapacity;
        if (exclusions > 1) {
            std::cout << "The meeting cannot be held as planned due to fire regulations. " << exclusions << " people need to be excluded.";
        } else {
            std::cout << "The meeting cannot be held as planned due to fire regulations. " << exclusions << " person needs to be excluded.";
        }
    } else {
        std::cout << "The meeting can proceed as planned.";
    }
}
