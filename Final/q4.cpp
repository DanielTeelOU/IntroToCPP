//
// Created by Danny Teel on 4/21/20.
//

#include <iostream>
#include <iomanip>
using namespace std;

class Point {
public:
    Point(double x = 0.0, double y = 0.0) {}

    void setXY(double dx, double dy)
    {
        x = dx;
        y = dy;
    }

    Point operator- () const;

    double getX()
    {
        return x;
    }

    double getY()
    {
        return y;
    }

private:
    double x, y;
};

Point Point::operator- () const
{
    return *this;
}

// test
int main()
{
    // format output
    cout << std::fixed;
    cout << std::setprecision(0);

    // initial values
    Point p(0.0, 0.0);
    cout << "X and Y coordinates are : (" << p.getX() << "," << p.getY() << ")\n";

    // set new values
    p.setXY(50, 17);
    cout << "New X and Y coordinates are : (" << p.getX() << "," << p.getY() << ")\n";
}
