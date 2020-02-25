//
// Created by Danny Teel on 2/24/20.
//

#include <iostream>
#include <math.h>

int main() {
    int choice;
    char rerun;
    int length();
    int weight();

    std::cout << "Would you like to convert from length (0) or weight (1)?\n";
    std::cin >> choice;

    if (choice == 0) {
        length();
    }
    if (choice == 1) {
        weight();
    }
}

int weight() {
    int choice;
    char rerun;
    int toMetric();
    int toEmpirical();

    std::cout << "Would you like to convert from metric to empirical (0) or empirical to metric (1)?\n";
    std::cin >> choice;

    if (choice == 0) {
        toEmpirical();
        std::cout << "Would you like to run again? (y/n) ";
        std::cin >> rerun;
        if (rerun == 'y') {
            main();
        } else {
            return 0;
        }
    }
    if (choice == 1) {
        toMetric();
        std::cout << "Would you like to run again? (y/n) ";
        std::cin >> rerun;
        if (rerun == 'y') {
            main();
        } else {
            return 0;
        }
    } else {
        std::cout << "Would you like to run again? (y/n) ";
        std::cin >> rerun;
        if (rerun == 'y') {
            main();
        } else {
            return 0;
        }
    }
}

int toMetric() {
    double pounds, oz, total, kg, g;
    char rerun;
    double totalPounds(double pounds, double oz);
    int toKg(double total);
    double toG(double total, double kg);

    std::cout << "How many pounds?\n";
    std::cin >> pounds;

    std::cout << "How many ounces?\n";
    std::cin >> oz;

    if (pounds || oz > 0) {
        total = totalPounds(pounds, oz);
        kg = toKg(total);
        g = toG(total, kg);
        if (kg > 1) {
            std::cout << "The input is equivalent to " << kg << " kilograms " << " and " << g << " grams.\n";
        } else {
            std::cout << "The input is equivalent to " << g << " grams.\n";
        }
    } else {
        return 0;
    }
}

double totalPounds(double pounds, double oz) {
    double total = (oz / 16) + pounds;
    return total;
}

int toKg(double total) {
    int kg = total / 2.2046;
    return kg;
}

double toG(double total, double kg) {
    double g = ((2.2046 * total) - kg) / 1000;
    return g;
}

int toEmpirical() {
    double pounds, oz, total, kg, g;
    char rerun;
    double totalKg(double kg, double g);
    int toLbs(double total);
    double toOz(double total, double pounds);

    std::cout << "How many kilograms?\n";
    std::cin >> kg;

    std::cout << "How many grams?\n";
    std::cin >> g;

    if (kg || g > 0) {
        total = totalKg(kg, g);
        pounds = toLbs(total);
        oz = toOz(total, pounds);
        if (pounds > 1) {
            std::cout << "The input is equivalent to " << pounds << " pounds " << " and " << oz << " ounces.\n";
        } else {
            std::cout << "The input is equivalent to " << oz << " ounces.\n";
        }
    } else {
        return 0;
    }
}

double totalKg(double kg, double g) {
    double total = kg + (g / 1000);
    return total;
}

int toLbs(double total) {
    int lbs = total * 2.2046;
    return lbs;
}

double toOz(double total, double pounds) {
    double oz = (total - (pounds / 2.2046)) / 16;
    return oz;
}

int length() {
    int choice;
    char rerun;
    int metric();
    int empirical();

    std::cout << "Would you like to convert from metric to empirical (0) or empirical to metric (1)?\n";
    std::cin >> choice;

    if (choice == 0) {
        empirical();
        std::cout << "Would you like to run again? (y/n) ";
        std::cin >> rerun;
        if (rerun == 'y') {
            main();
        } else {
            return 0;
        }
    }
    if (choice == 1) {
        metric();
        std::cout << "Would you like to run again? (y/n) ";
        std::cin >> rerun;
        if (rerun == 'y') {
            main();
        } else {
            return 0;
        }
    } else {
        std::cout << "Would you like to run again? (y/n) ";
        std::cin >> rerun;
        if (rerun == 'y') {
            main();
        } else {
            return 0;
        }
    }
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
