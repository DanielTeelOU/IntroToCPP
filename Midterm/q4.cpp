//
// Created by Danny Teel on 3/3/20.
//

#include <iostream>

int main() {
    int x = 3, y = 5;
    int swapValues(int x, int y);
    bool a = true, b = false;
    bool swapValues(bool x, bool y);

    std::cout << "Swap integers.\n";
    std::cout << "Original x = " << x << " y = " << y << " \n";
    std::cout << "The swapped values: " << swapValues(x, y) << "\n";

    std::cout << "Swap booleans.\n";
    std::cout << "Original x = " << a << " y = " << b << "\n";
    std::cout << "The swapped values: " << swapValues(a, b) << "\n";

    return 0;
}

int swapValues(int x, int y) {
    int temp;
    temp = x;
    x = y;
    y = temp;
    std::cout << x << " " << y << "\n";
}

bool swapValues(bool x, bool y) {
    bool temp;
    temp = x;
    x = y;
    y = temp;
    std::cout << x << " " << y << "\n";
}
