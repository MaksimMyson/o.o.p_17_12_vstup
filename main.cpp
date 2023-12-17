#include "student.h"
#include <iostream>

using namespace std;

int main() {
    Student student;

    student.inputData();
    student.displayData();

    cout << "\nAccessing Data Using Accessors:\n";
    cout << "Full Name: " << Student::getFullName(student) << "\n";
    cout << "Group Number: " << Student::getGroupNumber(student) << "\n";

    return 0;
}
