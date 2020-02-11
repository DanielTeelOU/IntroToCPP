//
// Created by Danny Teel on 2/8/20.
//

#include <iostream>

float G = 6.673E-11;

int main() {
    float m1, m2, d, gForce;
    float gravity(float m1, float m2, float d);
    char rerun;

    std::cout << "What is mass 1 (in kg)? ";
    std::cin >> m1;

    std::cout << "What is mass 2 (in kg)? ";
    std::cin >> m2;

    std::cout << "What is the distance (in m)? ";
    std::cin >> d;

    gForce = gravity(m1, m2, d);
    if (gForce > 1) {
        std::cout << "The gravitational force between the objects is " << gForce << " dynes.\n";
    } else {
        std::cout << "The gravitational force between the objects is " << gForce << " dyne.\n";
    }

    std::cout << "Would you like to run again? (y/n) ";
    std::cin >> rerun;
    if (rerun == 'y') {
        main();
    }
    return 0;
}

float gravity(float m1, float m2, float d) {
    float gForce = G * (m1 * m2 / (d * d));
    return gForce;
}
