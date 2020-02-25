//
// Created by Danny Teel on 2/24/20.
//

#include <iostream>

int main() {
    double pounds, oz, total, kg, g;
    char rerun;
    double totalKg(double kg, double g);
    int toLbs(double total);
    double toOz(double total, double pounds);

    std::cout << "How many kilograms?\n";
    std::cin >> kg;

    std::cout << "How many grams?\n";
    std::cin >> g;

    total = totalKg(kg, g);
    pounds = toLbs(total);
    oz = toOz(total, pounds);

    std::cout << "The input is equivalent to " << pounds << " pounds " << " and " << oz << " ounces.\n";

    std::cout << "Would you like to run again? (y/n) ";
    std::cin >> rerun;
    if (rerun == 'y') {
        main();
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
