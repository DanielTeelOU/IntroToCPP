//
// Created by Danny Teel on 2/24/20.
//

#include <iostream>

int main() {
    double pounds, oz, total, kg, g;
    char rerun;
    double totalPounds(double pounds, double oz);
    int toKg(double total);
    double toG(double total, double kg);

    std::cout << "How many pounds?\n";
    std::cin >> pounds;

    std::cout << "How many ounces?\n";
    std::cin >> oz;

    total = totalPounds(pounds, oz);
    kg = toKg(total);
    g = toG(total, kg);

    std::cout << "The input is equivalent to " << kg << " kilograms " << " and " << g << " grams.\n";

    std::cout << "Would you like to run again? (y/n) ";
    std::cin >> rerun;
    if (rerun == 'y') {
        main();
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
