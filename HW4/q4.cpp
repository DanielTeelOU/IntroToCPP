//
// Created by Danny Teel on 2/24/20.
//

#include <iostream>
#include <math.h>

int main() {
    double feet, inches, total, meters, centimeters;
    char rerun;
    double totalInches(double feet, double inches);
    double convertToMeters(double inches);
    double calcCentimeters(int meters, double inches);

    std::cout << "How many feet? ";
    std::cin >> feet;

    std::cout << "How many inches? ";
    std::cin >> inches;

    if (feet || inches > 0) {
        total = totalInches(feet, inches);
        meters = convertToMeters(total);
        centimeters = calcCentimeters(meters, total);

        if (meters >= 1) {
            std::cout << "The input is equivalent to " << meters << " meters and " << centimeters << " centimeters.\n";
        } else {
            std::cout << "The input is equivalent to " << centimeters << " centimeters.\n";
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

double totalInches(double feet, double inches) {
    double totalInches = (feet / 12) + inches;
    return totalInches;
}

double convertToMeters(double inches) {
    double centimeters = 2.54 * inches;
    int meters = floor(centimeters / 100);
    return meters;
}

double calcCentimeters(int meters, double inches) {
    double centimeters = 2.54 * inches;
    double remainder = centimeters - (meters * 100);
    return remainder;
}
