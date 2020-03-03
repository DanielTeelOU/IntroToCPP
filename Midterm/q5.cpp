//
// Created by Danny Teel on 3/3/20.
//

#include <iostream>
#include <array>

int main() {
    std::array<int , 5> x{1, 2 , 4, 5, 6};
    int totalSquare = 0;
    int i = 0;

    while (i < x.size()) {
        int square = x[i] * x[i];
        std::cout <<"The Square of " << x[i] << " is " << square << "\n";
        totalSquare = totalSquare + square;
        i++;
    }
    std::cout << "The total of the squares is: " << totalSquare;
}
