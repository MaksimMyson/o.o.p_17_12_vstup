#include "student.h"
using namespace std;

// ����������� �� �������������
Student::Student() : fullName(nullptr) {
    // ����������� ����� ����� ����� �� �������������
}

// ����������� � �����������
Student::Student(const string& name, const string& date, const string& phone,
    const string& city, const string& country,
    const string& uniName, const string& uniCity, const string& uniCountry,
    const string& group) : birthDate(date), phoneNumber(phone), city(city),
    country(country), universityName(uniName),
    universityCity(uniCity), universityCountry(uniCountry),
    groupNumber(group) {
    // �������� ���'�� ��� ϲ� �� ��������� ��������
    fullName = new string(name);
}

// ����������
Student::~Student() {
    // ��������� ������� ���'�� ��� ϲ�
    delete fullName;
}

void Student::inputData() {
    // �������� ����� ��������
    fullName = new string;  // �������� ���'�� ����� ���������
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
    // ��������� ����� ��������
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
