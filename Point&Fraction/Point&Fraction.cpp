#include <iostream>

class Point {
public:
    int x, y;

    Point(int x = 0, int y = 0) : x(x), y(y) {}

    Point operator+(const Point& other) const {
        return Point(x + other.x, y + other.y);
    }

    Point operator-(const Point& other) const {
        return Point(x - other.x, y - other.y);
    }

    Point operator*(const int scalar) const {
        return Point(x * scalar, y * scalar);
    }

    Point operator/(const int scalar) const {
        return Point(x / scalar, y / scalar);
    }

    void print() const {
        std::cout << "(" << x << ", " << y << ")" << std::endl;
    }
};
