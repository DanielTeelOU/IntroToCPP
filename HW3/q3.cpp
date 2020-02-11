//
// Created by Danny Teel on 2/8/20.
//

#include <iostream>
#include <iomanip>

int main() {
    double currentPrice, lastPrice, inflationRate, oneYearPrice, twoYearPrice;
    double inflation(double currentPrice, double lastPrice), inflationProjection(double currentPrice, double inflationRate);
    char rerun;
    std::cout << "What is the price of the item? $";
    std::cin >> currentPrice;
    std::cout << "What was the price of the item one year ago? $";
    std::cin >> lastPrice;

    std::cout << std::fixed << std::setprecision(1);
    inflationRate = inflation(currentPrice, lastPrice);
    std::cout << "The inflation is: " << inflationRate << "%\n";

    std::cout << std::fixed << std::setprecision(2);
    oneYearPrice = inflationProjection(currentPrice, inflationRate);
    std::cout << "Next years projected price is: $" << oneYearPrice << "\n";
    twoYearPrice = inflationProjection(oneYearPrice, inflationRate);
    std::cout << "In 2 years it is projected to be: $" << twoYearPrice << "\n";

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

double inflationProjection(double currentPrice, double inflationRate) {
    double projectedPrice = currentPrice * (1 + (inflationRate / 100));
    return projectedPrice;
}
