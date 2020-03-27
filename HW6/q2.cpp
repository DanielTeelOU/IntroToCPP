//
// Created by Danny Teel on 3/26/20.
//

#include <iostream>
using namespace std;

class CounterType {
    private:
        int count;
        int counter = 0;

    public:
        CounterType() {
            count = 0;
        }

        // set the count
        CounterType(int c) {
            count = c;
        }

        void increaseCounter() {
            counter++;
        }

    // decrement the count all the way to zero
    int decreaseCount() {
        if (count == 0) {
            return 0;
        }

        count--;

        return 1;
    }

    int getCount() {
        return count;
    }

    int getCounter() {
        return counter;
    }

    // print count and counter
    void print_c(ostream &cout) {
        cout << "Count : " << getCount() << "\n";
        cout << "Counter : " << getCounter() << "\n\n";
    }
};

// test
int main(int argc, char const *argv[]) {
    int value;

    cout << "Enter a number to count to: ";
    cin >> value;

    CounterType c(value);
    while (1) {
        c.print_c(cout);
        c.increaseCounter();
        int t = c.decreaseCount();
        if (!t) {
            break;
        }
    }
    return 0;
}
