//
// Created by Danny Teel on 2/8/20.
//

#include <iostream>
#include <math.h>

int main() {
    double height, weight;
    int age;
    double hatSize(double weight, double height), jacketSize(double weight, double height, int age), wasteSize(double weight, int age);
    char rerun;

    std::cout << "What is your height (in inches)? ";
    std::cin >> height;

    std::cout << "What is your weight (in pounds)? ";
    std::cin >> weight;

    std::cout << "What is your age (in years)? ";
    std::cin >> age;

    std::cout << "Your hat size is: " << hatSize(weight, height) << "\n";

    std::cout << "Your jacket size is: " << jacketSize(weight, height, age) << "\n";
    std::cout << "Your waste size (in inches) is: " << wasteSize(weight, age) << "\n";

    std::cout << "Would you like to run again? (y/n) ";
    std::cin >> rerun;
    if (rerun == 'y') {
        main();
    }
    return 0;
}

double hatSize(double weight, double height) {
    double size = (weight / height) * 2.9;
    return size;
}

double jacketSize(double weight, double height, int age) {
    double adjustment = floor(age / 10) / 8;
    double size = ((height * weight) / 288) + adjustment;
    return size;
}

double wasteSize(double weight, int age) {
    if (age >= 28) {
        double adjustment = floor((age - 28) / 2) / 10;
        double size = (weight / 5.7) + adjustment;
        return size;
    } else {
        double size = (weight / 5.7);
        return size;
    }
}
