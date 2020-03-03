//
// Created by Danny Teel on 3/3/20.
//

#include <iostream>

int main() {
    int least2(int arr[], int size);
    int x[5] = {1, 6, 7, 8, 9};
    int size = sizeof(x)/ sizeof(*x);
    std::cout << least2(x, size);
    return 0;
}

int least2(int arr[], int size) {
    int smallest, secondSmallest;
    int i = 0;
    smallest = secondSmallest = INT_MAX;
    while (i < size) {
        if (arr[i] < smallest) {
            secondSmallest = smallest;
            smallest = arr[i];
        }
        else if (arr[i] < secondSmallest and arr[i] != smallest) {
            secondSmallest = arr[i];
        }
        i++;
    }
    std::cout << "First smallest is: " << smallest << " and the second smallest is: " << secondSmallest << "\n";
}
