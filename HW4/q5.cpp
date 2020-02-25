//
// Created by Danny Teel on 2/24/20.
//

#include <iostream>
#include <math.h>

int main() {
    double feet, inches, total, meters, centimeters;
    char rerun;
    double totalCm(double meters, double centimeters);
    double convertToFeet(double cm);
    double calcInches(int feet, double cm);

    std::cout << "How many meters? ";
    std::cin >> meters;

    std::cout << "How many centimeters? ";
    std::cin >> centimeters;

    if (meters || centimeters > 0) {
        total = totalCm(meters, centimeters);
        feet = convertToFeet(total);
        inches = calcInches(feet, total);

        if (feet >= 1) {
            std::cout << "The input is equivalent to " << feet << " feet and " << inches << " inches.\n";
        } else {
            std::cout << "The input is equivalent to " << inches << " inches.\n";
        }

        std::cout << "Would you like to run again? (y/n) ";
        std::cin >> rerun;
        if (rerun == 'y') {
            main();
        } else {
            return 0;
        }
    } else {
        return 0;
    }
}

double totalCm(double meters, double centimeters) {
    double totalCm = (meters / 100) + centimeters;
    return totalCm;
}

double convertToFeet(double cm) {
    double inches = cm / 2.54;
    int feet = floor(inches / 12);
    return feet;
}

double calcInches(int feet, double inches) {
    double cm = inches / 2.54;
    double remainder = inches - (feet * 12);
    return remainder;
}
