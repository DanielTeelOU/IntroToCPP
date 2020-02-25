//
// Created by Danny Teel on 2/24/20.
//

#include <iostream>
#include <math.h>

int main() {
    int amount, quarters, dimes, nickels;
    char rerun;
    bool touched = false;
    int determineQuarters(int amount);
    int determineDimes(int amount);
    int determineNickels(int amount);

    std::cout << "Please enter the amount of change: ";
    std::cin >> amount;

    if (amount > 99) {
        std::cout << "Invalid amount.\n";
        main();
    }
    if (amount < 1) {
        std::cout << "Invalid amount.\n";
        main();
    } else {
        if (amount/25 >= 1) {
            quarters = determineQuarters(amount);
            std::cout << "Quarters: " << quarters << "\n";
            amount = amount - (quarters * 25);
            if (amount/10 >= 1) {
                dimes = determineDimes(amount);
                std::cout << "Dimes: " << dimes << "\n";
                amount = amount - (dimes * 10);
                if (amount/5 >= 1) {
                    nickels = determineNickels(amount);
                    std::cout << "Nickels: " << nickels << "\n";
                    amount = amount - (nickels * 5);
                    if (amount > 0) {
                        touched = true;
                        std::cout << "Pennies: " << amount << "\n";
                        std::cout << "Would you like to run again? (y/n) ";
                        std::cin >> rerun;
                        if (rerun == 'y') {
                            main();
                        } else {
                            return 0;
                        }
                    }
                    else {
                        touched = true;
                        std::cout << "Would you like to run again? (y/n) ";
                        std::cin >> rerun;
                        if (rerun == 'y') {
                            main();
                        } else {
                            return 0;
                        }
                    }
                }
                if (amount > 0) {
                    touched = true;
                    std::cout << "Pennies: " << amount << "\n";
                    std::cout << "Would you like to run again? (y/n) ";
                    std::cin >> rerun;
                    if (rerun == 'y') {
                        main();
                    } else {
                        return 0;
                    }
                }
                else {
                    touched = true;
                    std::cout << "Would you like to run again? (y/n) ";
                    std::cin >> rerun;
                    if (rerun == 'y') {
                        main();
                    } else {
                        return 0;
                    }
                }
            }
            if (amount/5 >= 1) {
                nickels = determineNickels(amount);
                std::cout << "Nickels: " << nickels << "\n";
                amount = amount - (nickels * 5);
                if (amount > 0) {
                    touched = true;
                    std::cout << "Pennies: " << amount << "\n";
                    std::cout << "Would you like to run again? (y/n) ";
                    std::cin >> rerun;
                    if (rerun == 'y') {
                        main();
                    } else {
                        return 0;
                    }
                }
                else {
                    touched = true;
                    std::cout << "Would you like to run again? (y/n) ";
                    std::cin >> rerun;
                    if (rerun == 'y') {
                        main();
                    } else {
                        return 0;
                    }
                }
            }
            if (amount > 0) {
                touched = true;
                std::cout << "Pennies: " << amount << "\n";
                std::cout << "Would you like to run again? (y/n) ";
                std::cin >> rerun;
                if (rerun == 'y') {
                    main();
                } else {
                    return 0;
                }
            }
            else {
                touched = true;
                std::cout << "Would you like to run again? (y/n) ";
                std::cin >> rerun;
                if (rerun == 'y') {
                    main();
                } else {
                    return 0;
                }
            }
        }
        if (amount/10 >= 1) {
            dimes = determineDimes(amount);
            std::cout << "Dimes: " << dimes << "\n";
            amount = amount - (dimes * 10);
            if (amount/5 >= 1) {
                nickels = determineNickels(amount);
                std::cout << "Nickels: " << nickels << "\n";
                amount = amount - (nickels * 5);
                if (amount > 0) {
                    touched = true;
                    std::cout << "Pennies: " << amount << "\n";
                }
                else {
                    touched = true;
                    std::cout << "Would you like to run again? (y/n) ";
                    std::cin >> rerun;
                    if (rerun == 'y') {
                        main();
                    } else {
                        return 0;
                    }
                }
            }
            if (amount > 0) {
                touched = true;
                std::cout << "Pennies: " << amount << "\n";
                std::cout << "Would you like to run again? (y/n) ";
                std::cin >> rerun;
                if (rerun == 'y') {
                    main();
                } else {
                    return 0;
                }
            }
            else {
                touched = true;
                std::cout << "Would you like to run again? (y/n) ";
                std::cin >> rerun;
                if (rerun == 'y') {
                    main();
                } else {
                    return 0;
                }
            }
        }
        if (amount/5 >= 1) {
            nickels = determineNickels(amount);
            std::cout << "Nickels: " << nickels << "\n";
            amount = amount - (nickels * 5);
            if (amount > 0) {
                touched = true;
                std::cout << "Pennies: " << amount << "\n";
            }
            else {
                touched = true;
                std::cout << "Would you like to run again? (y/n) ";
                std::cin >> rerun;
                if (rerun == 'y') {
                    main();
                } else {
                    return 0;
                }
            }
        }
        if (amount > 0 && touched == false) {
            std::cout << "Pennies: " << amount << "\n";
            std::cout << "Would you like to run again? (y/n) ";
            std::cin >> rerun;
            if (rerun == 'y') {
                main();
            } else {
                return 0;
            }
        }
        else {
            std::cout << "Would you like to run again? (y/n) ";
            std::cin >> rerun;
            if (rerun == 'y') {
                main();
            } else {
                return 0;
            }
        }
    }
}

int determineQuarters(int amount) {
    int quarters = floor(amount / 25);
    return quarters;
}

int determineDimes(int amount) {
    int dimes = floor(amount / 10);
    return dimes;
}

int determineNickels(int amount) {
    int nickels = floor(amount / 5);
    return nickels;
}
