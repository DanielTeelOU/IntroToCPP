//
// Created by Danny Teel on 2/8/20.
//

#include <iostream>
#include <math.h>

int main() {
    double score1, score2, score3, score4;
    float average(double s1, double s2, double s3, double s4),
    standardDeviation(double s1, double s2, double s3, double s4, double averageScore);
    char rerun;

    std::cout << "What is your first score? ";
    std::cin >> score1;

    std::cout << "What is your second score? ";
    std::cin >> score2;

    std::cout << "What is your third score? ";
    std::cin >> score3;

    std::cout << "What is your fourth score? ";
    std::cin >> score4;

    float averageScore = average(score1, score2, score3, score4);
    std::cout << "The average is: " << averageScore << "\n";

    float standardDev = standardDeviation(score1, score2, score3, score4, averageScore);
    std::cout << "The standard deviation is: " << standardDev << "\n";

    std::cout << "Would you like to run again? (y/n) ";
    std::cin >> rerun;
    if (rerun == 'y') {
        main();
    }
    return 0;
}

float average(double s1, double s2, double s3, double s4) {
    float average = (s1 + s2 + s3 + s4) / 4;
    return average;
}

float standardDeviation(double s1, double s2, double s3, double s4, double averageScore) {
    float stDev = sqrt((pow((s1 - averageScore), 2)
            + pow((s2 - averageScore), 2)
            + pow((s3 - averageScore), 2)
            + pow((s4 - averageScore), 2)) / 4);
    return stDev;
}
