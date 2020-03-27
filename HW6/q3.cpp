//
// Created by Danny Teel on 3/26/20.
//

#include <iostream>
#include <complex>
#include <iomanip>
using namespace std;

// to be able to rotate the point by a certain angle utilizing polar values
typedef complex<double> point;

// coordinate values
double x, y;

class Point {
public:
    // defaults
    Point(double x = 0.0, double y = 0.0) {
    }

    // read x coordinate
    double getX() {
        return x;
    }

    // read y coordinate
    double getY() {
        return y;
    }

    // overwrite and set new x coordinate
    void SetX(double dx) {
        x = dx;
    }

    // overwrite and set new y coordinate
    void SetY(double dy) {
        y = dy;
    }

    // translate point around the plane
    void move(double dx, double dy) {
        x = x + dx;
        y = y + dy;
    }

    // rotate 90 degrees about the origin
    point rotate() {
        point P(x, y);
        return (P) * polar(1.0, (3.1415926535897/2));
    }
};

// test
int main() {
    // format output
    cout << std::fixed;
    cout << std::setprecision(0);

    // initial values
    Point p(0.0, 0.0);
    cout << "X and Y coordinates are : (" << p.getX() << "," << p.getY() << ")\n";

    // set new values
    p.SetX(50);
    p.SetY(17);
    cout << "New X and Y coordinates are : (" << p.getX() << "," << p.getY() << ")\n";

    // rotate
    cout << "After 90 degree clockwise rotation: ";
    cout << p.rotate() << "\n";

    // translate
    p.move(5, 10);
    cout << "The original point moved 5 units in the x direction and 10 units in the y direction : (" << p.getX() << "," << p.getY() << ")\n";
}
