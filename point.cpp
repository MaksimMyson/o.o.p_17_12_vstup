#include "point.h"
using namespace std;

void Point::inputPoint() {
    cout << "Enter x coordinate: ";
    cin >> x;

    cout << "Enter y coordinate: ";
    cin >> y;

    cout << "Enter z coordinate: ";
    cin >> z;
}

void Point::displayPoint() const {
    cout << "Point Coordinates: (" << x << ", " << y << ", " << z << ")\n";
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
