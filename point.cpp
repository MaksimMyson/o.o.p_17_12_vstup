#include "point.h"
using namespace std;

Point::Point() : x(0.0), y(0.0), z(0.0) {
   
}

void Point::inputData() {
    cout << "Enter x coordinate: ";
    cin >> x;

    cout << "Enter y coordinate: ";
    cin >> y;

    cout << "Enter z coordinate: ";
    cin >> z;
}

void Point::displayData() const {
    cout << "Point Coordinates: (" << x << ", " << y << ", " << z << ")\n";
}

double Point::getX() const {
    return x;
}

double Point::getY() const {
    return y;
}

double Point::getZ() const {
    return z;
}

void Point::saveToFile(const string& filename) const {
    ofstream outFile(filename);

    if (outFile.is_open()) {
        outFile << x << " " << y << " " << z;
        outFile.close();
        cout << "Data saved to file: " << filename << "\n";
    }
    else {
        cerr << "Unable to open file: " << filename << "\n";
    }
}

void Point::loadFromFile(const string& filename) {
    ifstream inFile(filename);

    if (inFile.is_open()) {
        inFile >> x >> y >> z;
        inFile.close();
        cout << "Data loaded from file: " << filename << "\n";
    }
    else {
        cerr << "Unable to open file: " << filename << "\n";
    }
}
