//
// Created by Danny Teel on 2/8/20.
//

#include <iostream>
#include <math.h>

int main() {
    float windSpeed, temp;
    float windChill(float windSpeed, float temp);
    char rerun;

    std::cout << "What is the wind speed (in m/s)? ";
    std::cin >> windSpeed;

    std::cout << "What is the temperature (in Celsius)? ";
    std::cin >> temp;

    float windChills = windChill(windSpeed, temp);
    std::cout << "The wind chill is " << windChills << " degrees Celsius.\n";

    std::cout << "Would you like to run again? (y/n) ";
    std::cin >> rerun;
    if (rerun == 'y') {
        main();
    }
    return 0;
}

float windChill(float windSpeed, float temp) {
    float windChill = 33 - ((10 * sqrt(windSpeed)
            - windSpeed + 10.5) * (33 - temp) / 23.1);
    return windChill;
}
