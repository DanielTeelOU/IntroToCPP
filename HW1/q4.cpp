//
// Created by Danny Teel on 1/26/20.
//
#include <iostream>
#include <iomanip>

int main() {
    float pay = 16.78, grossPay, hours, socialSecurity = 0.06, federalIncome = 0.14, stateIncome = 0.05, unionDues = 10.00, netPay, overtimeHours;
    int dependants;

    std::cout << std::fixed;
    std::cout << std::setprecision(2);

    std::cout << "How many hours were worked?\n";
    std::cin >> hours;

    std::cout << "How many dependants are being claimed?\n";
    std::cin >> dependants;

    if (hours > 40) {
        overtimeHours = hours - 40;
        grossPay = (pay * 40) + (pay * (overtimeHours * 1.5));
        socialSecurity = grossPay * socialSecurity;
        federalIncome = grossPay * federalIncome;
        stateIncome = grossPay * stateIncome;
        netPay = grossPay - socialSecurity - federalIncome - stateIncome - unionDues;

        std::cout << "The gross pay is: $" << grossPay << "\n";
        std::cout << "The withholding amounts are:\n";
        std::cout << "Social Security Tax: $" << socialSecurity << "\n";
        std::cout << "Federal Income Tax: $" << federalIncome << "\n";
        std::cout << "State Income Tax: $" << stateIncome << "\n";
        std::cout << "Union Dues: $" << unionDues << "\n";
        if (dependants >= 3) {
            netPay = netPay - 35;
            std::cout << "Dependant Tax: $35\n";
            std::cout << "The net take-home pay for the week is: $" << netPay;
        } else {
            std::cout << "The net take-home pay for the week is: $" << netPay;
        }
        return 0;
    } else {
        grossPay = pay * hours;
        socialSecurity = grossPay * socialSecurity;
        federalIncome = grossPay * federalIncome;
        stateIncome = grossPay * stateIncome;
        netPay = grossPay - socialSecurity - federalIncome - stateIncome - unionDues;

        std::cout << "The gross pay is: $" << grossPay << "\n";
        std::cout << "The withholding amounts are:\n";
        std::cout << "Social Security Tax: $" << socialSecurity << "\n";
        std::cout << "Federal Income Tax: $" << federalIncome << "\n";
        std::cout << "State Income Tax: $" << stateIncome << "\n";
        std::cout << "Union Dues: $" << unionDues << "\n";
        if (dependants >= 3) {
            netPay = netPay - 35;
            std::cout << "Dependant Tax: $35\n";
            std::cout << "The net take-home pay for the week is: $" << netPay;
        } else {
            std::cout << "The net take-home pay for the week is: $" << netPay;
        }
        return 0;
    }
}
