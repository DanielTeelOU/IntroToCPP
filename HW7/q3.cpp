//
// Created by Danny Teel on 4/5/20.
//

#include <iostream>
using namespace std;
class GroceryCounter
{
private:
    int Max_count;
public:
    GroceryCounter();
    explicit GroceryCounter(int Max_value);
    void reset();
    void incr1();
    void incr10();
    void incr100();
    void incr1000();
    bool overflow();
    int count;
};

// Set defaults
GroceryCounter::GroceryCounter()
{
    count = 0;
    Max_count = 9999;
}

// Set max counter value
GroceryCounter::GroceryCounter(int Max_value)
{
    Max_count = Max_value;
    count = 0;
}

// Reset the count
void GroceryCounter::reset()
{
    count = 0;
}

// Pennies
void GroceryCounter::incr1()
{
    count += 1;
}

// Dimes
void GroceryCounter::incr10()
{
    count += 10;
}

// Dollars
void GroceryCounter::incr100()
{
    count += 100;
}

// Tens of dollars
void GroceryCounter::incr1000()
{
    count += 1000;
}

// If the count is exceded
bool GroceryCounter::overflow()
{
    return count > Max_count;
}

// Main program
int main() {
    GroceryCounter countkeeper;
    char input[2], choice = 'y';

    cout << "Welcome to Mom's Grocery Counter\n";
    cout << "Please enter your money as follows:\n";
    cout << "Using all lower case letters a, s, d, and f followed by the numbers 1-9\n";
    do {
        cout << "a: cents\n"
                "s: dimes\n"
                "d: dollars\n"
                "f: tens of dollars\n"
                "r: reset to zero\n"
                "o: check if the overflow is met"
                "x: exit the program\n";
        cout << "Enter your choice: ";
        cin >> input;


        int y = input[1] - '1' + 1;
        int x = 0;

        switch (tolower(input[0])) {
            case 'a':
                for (x = 0; x < y; x++) { countkeeper.incr1(); }
                break;
            case 's':
                for (x = 0; x < y; x++) { countkeeper.incr10(); }
                break;
            case 'd':
                for (x = 0; x < y; x++) { countkeeper.incr100(); }
                break;
            case 'f':
                for (x = 0; x < y; x++) { countkeeper.incr1000(); }
                break;
            case 'o':
                // Put the overflow amount
                cout << "Overflow: " << countkeeper.overflow() << "\n";
                break;
            case 'r':
                countkeeper.reset();
                break;
            case 'x':
                choice = 'n';
                break;
            default:
                cout << "Invalid input\n";
                break;
        }

        cout << "Your total (in cents) is: " << countkeeper.count << "\n"
                 "-----------------------------\n";
    } while (choice == 'y');
}
