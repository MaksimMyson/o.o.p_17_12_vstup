#include "student.h"
using namespace std;

// Конструктор за замовчуванням
Student::Student() : fullName(nullptr) {
    // Ініціалізація інших членів класу за замовчуванням
}

// Конструктор з параметрами
Student::Student(const string& name, const string& date, const string& phone,
    const string& city, const string& country,
    const string& uniName, const string& uniCity, const string& uniCountry,
    const string& group) : birthDate(date), phoneNumber(phone), city(city),
    country(country), universityName(uniName),
    universityCity(uniCity), universityCountry(uniCountry),
    groupNumber(group) {
    // Виділення пам'яті для ПІБ та копіювання значення
    fullName = new string(name);
}

// Деструктор
Student::~Student() {
    // Звільнення виділеної пам'яті для ПІБ
    delete fullName;
}

void Student::inputData() {
    // Введення даних студента
    fullName = new string;  // Виділення пам'яті перед введенням
    cout << "Enter full name: ";
    getline(cin, *fullName);

    cout << "Enter birth date: ";
    getline(cin, birthDate);

    cout << "Enter phone number: ";
    getline(cin, phoneNumber);

    cout << "Enter city: ";
    getline(cin, city);

    cout << "Enter country: ";
    getline(cin, country);

    cout << "Enter university name: ";
    getline(cin, universityName);

    cout << "Enter university city: ";
    getline(cin, universityCity);

    cout << "Enter university country: ";
    getline(cin, universityCountry);

    cout << "Enter group number: ";
    getline(cin, groupNumber);
}


void Student::displayData() const {
    // Виведення даних студента
    cout << "Full Name: " << getFullName() << "\n";
    cout << "Birth Date: " << birthDate << "\n";
    cout << "Phone Number: " << phoneNumber << "\n";
    cout << "City: " << city << "\n";
    cout << "Country: " << country << "\n";
    cout << "University Name: " << universityName << "\n";
    cout << "University City: " << universityCity << "\n";
    cout << "University Country: " << universityCountry << "\n";
    cout << "Group Number: " << groupNumber << "\n";
}
