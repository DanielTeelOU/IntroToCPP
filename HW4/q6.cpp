//
// Created by Danny Teel on 2/24/20.
//

#include <iostream>
#include <math.h>

int main() {
    int choice;
    char rerun;
    int metric();
    int empirical();

    std::cout << "Would you like to convert from metric to empirical (0) or empirical to metric (1)?\n";
    std::cin >> choice;

    if (choice == 0) {
        empirical();
    }
    if (choice == 1) {
        metric();
    } else {
        std::cout << "Would you like to run again? (y/n) ";
        std::cin >> rerun;
        if (rerun == 'y') {
            main();
        } else {
            return 0;
        }
    }

    return 0;
}

int empirical() {
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

int metric() {
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
