//
// Created by Danny Teel on 2/1/20.
//

#include <iostream>
#include <iomanip>

int main() {
    float cost = 1000.00, interest = 0.015, payment = 50.00, interestPayment, loanPayment, totalInterestPaid = 0.00;
    int months;

    for (int i = 1; cost > 0; i++) {
        interestPayment = cost * interest;
        loanPayment = payment - interestPayment;
        cost = cost - loanPayment;
        totalInterestPaid = totalInterestPaid + interestPayment;
        months = i;
        // std::cout << cost << "\n";
    }

    std::cout << std::fixed;
    std::cout << std::setprecision(2);
    std::cout << "It will take " << months << " months to pay off the loan. You will pay $" << totalInterestPaid << " in interest.";

    return 0;
}
