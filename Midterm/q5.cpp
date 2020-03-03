//
// Created by Danny Teel on 3/3/20.
//

#include <iostream>

int main() {
    int sumSquares(int arr[], int size);
    int x[5] = {1, 6, 7, 8, 9};
    int size = sizeof(x)/ sizeof(*x);
    sumSquares(x, size);
}

int sumSquares(int arr[], int size) {
    int totalSquare = 0;
    int i = 0;

    while (i < size) {
        int square = arr[i] * arr[i];
        std::cout <<"The Square of " << arr[i] << " is " << square << "\n";
        totalSquare = totalSquare + square;
        i++;
    }
    std::cout << "The total of the squares is: " << totalSquare;
}
