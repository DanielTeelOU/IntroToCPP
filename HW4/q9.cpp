//
// Created by Danny Teel on 2/24/20.
//

#include <iostream>

int main() {
    int choice;
    char rerun;
    int toMetric();
    int toEmpirical();

    std::cout << "Would you like to convert from metric to empirical (0) or empirical to metric (1)?\n";
    std::cin >> choice;

    if (choice == 0) {
        toEmpirical();
    }
    if (choice == 1) {
        toMetric();
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
