#include "student.h"
#include <iostream>

using namespace std;

Student::Student() {
}


void Student::inputData() {
    cout << "Enter Full Name: ";
    getline(cin, fullName);

    cout << "Enter Date of Birth: ";
    getline(cin, dateOfBirth);

    cout << "Enter Contact Phone: ";
    getline(cin, contactPhone);

    cout << "Enter City: ";
    getline(cin, city);

    cout << "Enter Country: ";
    getline(cin, country);

    cout << "Enter School Name: ";
    getline(cin, schoolName);

    cout << "Enter School City: ";
    getline(cin, schoolCity);

    cout << "Enter School Country: ";
    getline(cin, schoolCountry);

    cout << "Enter Group Number: ";
    getline(cin, groupNumber);
}

void Student::displayData() {
    cout << "\nStudent Information:\n";
    cout << "Full Name: " << fullName << "\n";
    cout << "Date of Birth: " << dateOfBirth << "\n";
    cout << "Contact Phone: " << contactPhone << "\n";
    cout << "City: " << city << "\n";
    cout << "Country: " << country << "\n";
    cout << "School Name: " << schoolName << "\n";
    cout << "School City: " << schoolCity << "\n";
    cout << "School Country: " << schoolCountry << "\n";
    cout << "Group Number: " << groupNumber << "\n";
}

string Student::getFullName(const Student& student) {
    return student.fullName;
}

string Student::getGroupNumber(const Student& student) {
    return student.groupNumber;
}
