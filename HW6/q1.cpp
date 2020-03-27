//
// Created by Danny Teel on 3/26/20.
//

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

// all the components of a student in regards to grade
struct StudentGrade {
    int quiz1;
    int quiz2;
    int midterm;
    int final;
    int total;
    double percent;
    char letterGrade;
};

void getData(StudentGrade& g);
void setLetterGrade(StudentGrade& g);
void format(int n);

// spacing
#define Y(i) setw(15)

// test
int main() {
    StudentGrade g;
    getData(g);

    // set weighting of grades
    const double Q_PERCENT = 12.5;
    const double M_PERCENT = 25.0;
    const double F_PERCENT = 50.0;

    // set quiz max score
    const int Q_SCORE = 10;
    // set exam max score
    const int E_SCORE = 100;

    // calculate grade in regards to score earned and grading weight
    double q1 = double(g.quiz1) / Q_SCORE * Q_PERCENT; // quiz 1
    double q2 = double(g.quiz2) / Q_SCORE * Q_PERCENT; // quiz 2
    double m = double(g.midterm) / E_SCORE * M_PERCENT; // midterm
    double f = double(g.midterm) / E_SCORE * F_PERCENT; // final

    // calculate the end grade
    g.total = g.quiz1 + g.quiz2 + g.midterm + g.final;
    g.percent = q1 + q2 + m + f;

    // individual test score
    int tScore = Q_SCORE * 2 + E_SCORE * 2;
    double tPercent = Q_PERCENT * 2 + M_PERCENT + F_PERCENT;

    setLetterGrade(g);

    // report card
    format(1);
    cout << "\n";
    cout << Y(i) << "TEST" << Y(i) << "POINTS" << Y(i) << "MAX POINTS" << "\n";
    cout << Y(i) << "Quiz 1" << Y(i) << g.quiz1 << Y(i) << Q_SCORE << "\n";
    cout << Y(i) << "Quiz 2" << Y(i) << g.quiz2 << Y(i) << Q_SCORE << "\n";
    cout << Y(i) << "Midterm" << Y(i) << g.midterm << Y(i) << E_SCORE << "\n";
    cout << Y(i) << "Final" << Y(i) << g.final << Y(i) << E_SCORE << "\n";
    cout << Y(i) << "--------------------------------------------------------\n";
    cout << Y(i) << "TOTAL" << Y(i) << g.total << Y(i) << tScore << "\n";
    cout << "\n";
    cout << Y(i) << "Average Percentage:" << Y(i) << g.percent << "%" << "\n";
    cout << Y(i) << "Final Letter Grade: " << Y(i) << g.letterGrade << "\n";
    cout << "\n";

    return 0;

}

// get user inputs
void getData(StudentGrade& g) {
    cout << "Enter Quiz 1 score (maximum is 10): ";
    cin >> g.quiz1;
    cout << "Enter Quiz 2 score (maximum is 10): ";
    cin >> g.quiz2;
    cout << "Enter Midterm score (maximum is 100): ";
    cin >> g.midterm;
    cout << "Enter Final score (maximum is 100): ";
    cin >> g.final;

    // ternaries to check input validity
    g.quiz1 = g.quiz1 > 10 ? 10 : g.quiz1;
    g.quiz1 = g.quiz1 < 0 ? 0 : g.quiz1;
    g.quiz2 = g.quiz2 > 10 ? 10 : g.quiz2;
    g.quiz2 = g.quiz2 < 0 ? 0 : g.quiz2;
    g.midterm = g.midterm > 100 ? 100 : g.midterm;
    g.midterm = g.midterm < 0 ? 0 : g.midterm;
    g.final = g.final > 100 ? 100 : g.final;
    g.final = g.final < 0 ? 0 : g.final;

    return;
}

// determine letter grade from percentage
void setLetterGrade(StudentGrade& g) {
    if (g.percent >= 90.0)
        g.letterGrade = 'A';
    else if (g.percent >= 80.0)
        g.letterGrade = 'B';
    else if (g.percent >= 70.0)
        g.letterGrade = 'C';
    else if (g.percent >= 60.0)
        g.letterGrade = 'D';
    else
        g.letterGrade = 'F';
}

// format outputs
void format(int n) {
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(n);
}
