//
// Created by Danny Teel on 2/8/20.
//

#include <iostream>
#include <iomanip>

int main() {
    double currentPrice, lastPrice;
    double inflation(double currentPrice, double lastPrice);
    char rerun;
    std::cout << "What is the price of the item? $";
    std::cin >> currentPrice;
    std::cout << "What was the price of the item one year ago? $";
    std::cin >> lastPrice;

    std::cout << std::fixed << std::setprecision(1);
    std::cout << "The inflation is: " << inflation(currentPrice, lastPrice) << "%\n";

    std::cout << "Would you like to run again? (y/n) ";
    std::cin >> rerun;
    if (rerun == 'y') {
        main();
    }
    return 0;
}

double inflation(double currentPrice, double lastPrice) {
    double itemsInflation = ((currentPrice - lastPrice) / lastPrice) * 100;
    return itemsInflation;
}