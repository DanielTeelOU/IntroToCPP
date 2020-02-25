//
// Created by Danny Teel on 2/24/20.
//

#include <iostream>
#include <math.h>

int main() {
    double s1, s2, s3, perimeter, area, semiperimeter;
    double sum(double s1, double s2, double s3);
    double triangleArea(double s1, double s2, double s3, double sum);


    std::cout << "What is the length of side 1? ";
    std::cin >> s1;
    if (s1 < 0) {
        std::cout << "You can not enter a negative number.\n";
        main();
    } else {
        std::cout << "What is the length of side 2? ";
        std::cin >> s2;
        if (s2 < 0) {
            std::cout << "You can not enter a negative number.\n";
            main();
        } else {
            std::cout << "What is the length of side 3? ";
            std::cin >> s3;
            if (s3 < 0) {
                std::cout << "You can not enter a negative number.\n";
                main();
            } else {
                perimeter = sum(s1, s2, s3);
                area = triangleArea(s1, s2, s3, perimeter);
                semiperimeter = perimeter / 2;

                std::cout << "The area is " << area << ". The semi-perimeter is " << semiperimeter << ".";

                return 0;
            }
        }
    }
}

double sum(double s1, double s2, double s3) {
    double perimeter = s1 + s2 + s3;
    return perimeter;
}

double triangleArea(double s1, double s2, double s3, double sum) {
    double area = sqrt(sum * (sum - s1) * (sum - s2) * (sum - s3));
    return area;
}
