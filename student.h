#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>

class Student {
private:
    std::string* fullName;
    std::string birthDate;
    std::string phoneNumber;
    std::string city;
    std::string country;
    std::string universityName;
    std::string universityCity;
    std::string universityCountry;
    std::string groupNumber;

public:
    // Конструктори та деструктор
    Student();
    Student(const std::string& name, const std::string& date, const std::string& phone,
        const std::string& city, const std::string& country,
        const std::string& uniName, const std::string& uniCity, const std::string& uniCountry,
        const std::string& group);
    ~Student();

    // Функції для доступу до даних
    inline const std::string& getFullName() const { return *fullName; }
    inline const std::string& getBirthDate() const { return birthDate; }
    inline const std::string& getPhoneNumber() const { return phoneNumber; }
    inline const std::string& getCity() const { return city; }
    inline const std::string& getCountry() const { return country; }
    inline const std::string& getUniversityName() const { return universityName; }
    inline const std::string& getUniversityCity() const { return universityCity; }
    inline const std::string& getUniversityCountry() const { return universityCountry; }
    inline const std::string& getGroupNumber() const { return groupNumber; }

    // Інші методи
    void inputData();
    void displayData() const;
};

#endif // STUDENT_H
