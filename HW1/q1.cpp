//
// Created by Danny Teel on 1/26/20.
//

#include <iostream>
#include <iomanip>

int main() {
    float salary, halfYear, retroPay, newAnnual, newMonthly;
    const float raise = 1.076;

    std::cout << std::fixed;
    std::cout << std::setprecision(2);

    std::cout << "Enter your salary: $";
    std::cin >> salary;

    newAnnual = salary * raise;
    halfYear = salary / 6;
    retroPay = (newAnnual / 6) - halfYear;
    newMonthly = newAnnual / 12;

    std::cout << "The retroactively due salary is: $" << retroPay << "\n";
    std::cout << "The new annual salary is: $" << newAnnual << "\n";
    std::cout << "The new monthly salary is: $" << newMonthly;
}
