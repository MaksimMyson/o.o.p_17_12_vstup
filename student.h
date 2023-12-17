#ifndef STUDENT_H
#define STUDENT_H

#include <string>

class Student {
private:
    std::string fullName;
    std::string dateOfBirth;
    std::string contactPhone;
    std::string city;
    std::string country;
    std::string schoolName;
    std::string schoolCity;
    std::string schoolCountry;
    std::string groupNumber;

public:
    Student();  // Додайте конструктор

    void inputData();
    void displayData();

    static std::string getFullName(const Student& student);
    static std::string getGroupNumber(const Student& student);
};

#endif // STUDENT_H
