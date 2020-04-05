//
// Created by Danny Teel on 4/5/20.
//

#include <iostream>

using namespace std;

class Month
{
public:
    Month(char first, char second, char third);
    explicit Month(int monthInt);
    Month();
    void outputMonthInt();
    void outputMonthLetters();
    Month nextMonth();
private:
    int month;
};

int month;

// Test program
int main()
{
    int monthInt;
    char firstL, secondL, thirdL;

    cout << "Default constructor\n";
    Month d;
    d.outputMonthInt();
    cout << "First three letters: ";
    d.outputMonthLetters();
    cout << "\n";

//    Not needed anymore since this section is redundant now with the updated question
//    cout << "Constructor with three letters as arguments\n";
//    cout << "Enter the first 3 letters of a month: ";
//    cin >> firstL;
//    cin >> secondL;
//    cin >> thirdL;
//    monthInt = returnMonth(firstL, secondL, thirdL);
//    if (monthInt <= 12 && monthInt >= 1)
//    {
//        Month num(monthInt);
//        num.outputMonthInt();
//        cout << "First three letters: ";
//        num.outputMonthLetters();
//    }
//    else
//    {
//        cout << "Invalid first 3 letters for month\n";
//        cout << "Enter the first 3 letters of a month: ";
//        cin >> firstL;
//        cin >> secondL;
//        cin >> thirdL;
//        monthInt = returnMonth(firstL, secondL, thirdL);
//        Month num(monthInt);
//        num.outputMonthInt();
//        cout << "First three letters: ";
//        num.outputMonthLetters();
//    }
//    cout << "\n";

    cout << "Constructor with 3 letters as arguments\n";
    cout << "Enter the first 3 letters of a month: ";
    cin >> firstL;
    cin >> secondL;
    cin >> thirdL;
    cout << "You have entered: ";
    Month letter(firstL, secondL, thirdL);
    letter.outputMonthLetters();
    letter.outputMonthInt();
    cout << "\n";

    cout << "Next month\n";
    cout << "Enter the first three month letters to see the next month: ";
    cin >> firstL;
    cin >> secondL;
    cin >> thirdL;
    cout << "You have entered: ";
    Month next(firstL, secondL, thirdL);
    next.outputMonthLetters();
    Month type = next.nextMonth();
    cout << "Next ";
    type.outputMonthInt();
    cout << "First three letters: ";
    type.outputMonthLetters();
//    monthInt = returnMonth(firstL, secondL, thirdL);
//    if (monthInt <= 12 && monthInt >= 1)
//    {
//        Month i(monthInt);
//        Month type = i.nextMonth();
//        type.outputMonthInt();
//        cout << "First three letters: ";
//        type.outputMonthLetters();
//    }
//    else
//    {
//        cout << "Invalid first 3 letters for month\n";
//        cout << "Enter the first 3 letters of a month: ";
//        cin >> firstL;
//        cin >> secondL;
//        cin >> thirdL;
//        monthInt = returnMonth(firstL, secondL, thirdL);
//        Month i(monthInt);
//        Month type = i.nextMonth();
//        type.outputMonthInt();
//        cout << "First three letters: ";
//        type.outputMonthLetters();
//    }
}

Month Month::nextMonth()
{
    if (month == 12)
        return Month(1);
    else
        return Month(month + 1);
}

// Default
Month::Month()
{
    month = 1;
}

// Change from default
Month::Month(int monthInt)
{
    month = monthInt;
}

// Read the first three letters and determine int month
Month::Month(char first, char second, char third)
{
    if ((first == 'j' || first == 'J') && (second == 'a' || second == 'A') && (third == 'n' || third == 'N'))
        month = 1;
    if ((first == 'f' || first == 'F') && (second == 'e' || second == 'E') && (third == 'b' || third == 'B'))
        month = 2;
    if ((first == 'm' || first == 'M') && (second == 'a' || second == 'A') && (third == 'r' || third == 'R'))
        month = 3;
    if ((first == 'a' || first == 'A') && (second == 'p' || second == 'P') && (third == 'r' || third == 'R'))
        month = 4;
    if ((first == 'm' || first == 'M') && (second == 'a' || second == 'A') && (third == 'y' || third == 'Y'))
        month = 5;
    if ((first == 'j' || first == 'J') && (second == 'u' || second == 'U') && (third == 'n' || third == 'N'))
        month = 6;
    if ((first == 'j' || first == 'J') && (second == 'u' || second == 'U') && (third == 'l' || third == 'L'))
        month = 7;
    if ((first == 'a' || first == 'A') && (second == 'u' || second == 'U') && (third == 'g' || third == 'G'))
        month = 8;
    if ((first == 's' || first == 'S') && (second == 'e' || second == 'E') && (third == 'p' || third == 'P'))
        month = 9;
    if ((first == 'o' || first == 'O') && (second == 'c' || second == 'C') && (third == 't' || third == 'T'))
        month = 10;
    if ((first == 'n' || first == 'N') && (second == 'o' || second == 'O') && (third == 'v' || third == 'V'))
        month = 11;
    if ((first == 'd' || first == 'D') && (second == 'e' || second == 'E') && (third == 'c' || third == 'C'))
        month = 12;
}

void Month::outputMonthInt()
{
    if (month >= 1 && month <= 12)
        cout << "Month number: " << month << "\n";
    else

        cout << "The month is invalid\n";
}

void Month::outputMonthLetters()
{
    switch (month)
    {
        case 1:
            cout << "Jan\n";
            break;
        case 2:
            cout << "Feb\n";
            break;
        case 3:
            cout << "Mar\n";
            break;
        case 4:
            cout << "Apr\n";
            break;
        case 5:
            cout << "May\n";
            break;
        case 6:
            cout << "Jun\n";
            break;
        case 7:
            cout << "Jul\n";
            break;
        case 8:
            cout << "Aug\n";
            break;
        case 9:
            cout << "Sep\n";
            break;
        case 10:
            cout << "Oct\n";
            break;
        case 11:
            cout << "Nov\n";
            break;
        case 12:
            cout << "Dec\n";
            break;
        default:
            cout << "The month is invalid\n";
    }
}
