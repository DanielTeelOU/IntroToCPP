//
// Created by Danny Teel on 3/16/20.
//

#include <iostream>
#include <string>
using namespace std;

int main() {
    char seat = ' ';
    string planeSeats[7] = {"1ABCD", "2ABCD", "3ABCD", "4ABCD", "5ABCD", "6ABCD", "7ABCD"};
    char rerun = ' ';
    int row = 0;

    rerun = 'y';

    // show initial selection
    for(int i = 0; i < 7; ++i) {
        cout << planeSeats[i] << "\n";
    }

    while(rerun == 'y') {
        // row
        cout << "Enter a row number (1-7): ";
        cin >> row;
        if (cin.fail()) {
            cout << "You must enter an integer.";
            break;
        }

        // column
        cout << "Enter a seat letter (A-D): ";
        cin >> seat;
        if (cin.fail()) {
            cout << "You must enter an uppercase letter.";
            break;
        }

        int index = 1 + seat - 'A';

        // already taken
        if(planeSeats[row-1][index] == 'X') {
            cout << "The seat is taken.\n";
        }
        else {
            // mark
            planeSeats[row - 1][index] = 'X';
        }

        for(int i = 0; i < 7; ++i) {
            cout << planeSeats[i] << "\n";
        }

        // rerun
        cout << "Make another seat selection? (y/n): ";
        cin >> rerun;
        cout << "\n";
    }

    return 0;
}
