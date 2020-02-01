//
// Created by Danny Teel on 2/1/20.
//

#include <iostream>
#include <iomanip>

int main() {
    float cost, inflation;
    int years, i;

    std::cout << "What is the current cost of the item? $";
    std::cin >> cost;
    std::cout << "How many years from now? ";
    std::cin >> years;
    std::cout << "What is the rate of inflation (in percent)? ";
    std::cin >> inflation;
    inflation = inflation / 100;

    std::cout << std::fixed;
    std::cout << std::setprecision(2);

    for (i=1; i <= years; i++) {
        cost = cost * (1 + inflation);
    }

    inflation = inflation * 100;

    std::cout << "The cost after " << years << " years at " << inflation << "% will be $" << cost << ".";

    return 0;
}
