//
// Created by Danny Teel on 2/24/20.
//

#include <iostream>

int main() {
    int hour, minute;
    int userInput(int hour);
    std::string determineTimeOfDay(int hour);

    std::cout << "Input the hour: ";
    std::cin >> hour;
    std::cout << "Input the minutes: ";
    std::cin >> minute;
    determineTimeOfDay(hour);

    std::cout << "The 12 hour time is " << userInput(hour) << ":" << minute << " " << determineTimeOfDay(hour);

    return 0;
}

int userInput(int hour) {
    if (hour >= 12) {
        return (hour - 12);
    } else {
        return hour;
    }
}

std::string determineTimeOfDay(int hour) {
    int decider;
    if (hour < 12) {
        return  "AM";
    } else {
        return "PM";
    }
}
