#ifndef POINT_H
#define POINT_H

#include <iostream>
#include <fstream>

class Point {
private:
    double x;
    double y;
    double z;

public:
    // ������������
    Point() : x(0.0), y(0.0), z(0.0) {}
    Point(double newX, double newY, double newZ) : x(newX), y(newY), z(newZ) {}

    // ������� ��� ������� �� ���������
    inline double getX() const { return x; }
    inline double getY() const { return y; }
    inline double getZ() const { return z; }

    // ���� ������
    void inputPoint();
    void displayPoint() const;
    void saveToFile(const std::string& filename) const;
    void loadFromFile(const std::string& filename);
};

#endif // POINT_H
