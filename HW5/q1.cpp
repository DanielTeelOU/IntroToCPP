//
// Created by Danny Teel on 3/16/20.
//

#include <iostream>
using namespace std;

// remove duplicate letters
char *deleteRepeats(char a[], int n) {
    int index = 0;

    // loop through every element to find any matches
    for (int i=0; i<n; i++) {
        int j;
        for (j=0; j<i; j++) {
            if (a[i] == a[j]) {
                break;
            }
        }
        if (j == i) {
            a[index++] = a[i];
        }
    }

    return a;
}

int main() {
    char a[10] = "";
    a[0] = 'a';
    a[1] = 'b';
    a[2] = 'a';
    a[3] = 'c';

    int n = sizeof(a) / sizeof(a[0]);
    cout << deleteRepeats(a, n);
    return 0;
}
