//
// Created by Danny Teel on 1/26/20.
//

#include <iostream>
#include <iomanip>

int main() {
    double loanAmount, interestRate, interestAmt, faceValue;
    int duration;

    std::cout << std::fixed;
    std::cout << std::setprecision(2);

    std::cout << "Enter the desired loan amount: $";
    std::cin >> loanAmount;

    std::cout << "Enter the interest rate percentage: ";
    std::cin >> interestRate;
    interestRate = interestRate / 100;

    std::cout << "Enter the duration of the loan in months: ";
    std::cin >> duration;

    interestAmt = (loanAmount * interestRate) * (duration / 12);
    faceValue = loanAmount + interestAmt;

    std::cout << "The face value required to secure the loan is: $" << faceValue << "\n";
    std::cout << "The monthly payment is: $" << faceValue / duration;
}
