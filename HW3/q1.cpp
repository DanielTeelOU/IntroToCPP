//
// Created by Danny Teel on 2/8/20.
//

#include <iostream>

float litersPerGallon = 0.264179;

int main() {
    float liters, miles;
    char rerun;
    float milesPerGallon(float liters, float gallons);
    std::cout << "How many liters of gasoline was consumed? ";
    std::cin >> liters;
    std::cout << "How many miles were traveled? ";
    std::cin >> miles;
    std::cout << "You had " << milesPerGallon(liters, miles) << " miles per gallon.";
    std::cout << "Would you like to run again? (y/n) ";
    std::cin >> rerun;
    if (rerun == 'y') {
        main();
    }
    return 0;
}

float milesPerGallon(float liters, float miles) {
    float mpg = miles / (liters / litersPerGallon);
    return mpg;
}
