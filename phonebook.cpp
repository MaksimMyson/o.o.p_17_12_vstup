#include "phonebook.h"
#include <fstream>
#include <sstream>

void PhoneBook::addContact(const Contact& contact) {
    contacts.push_back(contact);
}

void PhoneBook::removeContact(const std::string& name) {
    // Implement the removal logic
}

void PhoneBook::searchByName(const std::string& name) const {
    // Implement the search logic
}

void PhoneBook::displayAllContacts() const {
    for (const auto& contact : contacts) {
        std::cout << "Name: " << contact.getFullName() << "\n"
            << "Home Phone: " << contact.getHomePhone() << "\n"
            << "Work Phone: " << contact.getWorkPhone() << "\n"
            << "Mobile Phone: " << contact.getMobilePhone() << "\n"
            << "Additional Info: " << contact.getAdditionalInfo() << "\n\n";
    }
}

void PhoneBook::saveToFile(const std::string& filename) const {
    std::ofstream file(filename);

    if (file.is_open()) {
        for (const auto& contact : contacts) {
            file << contact.getFullName() << ","
                << contact.getHomePhone() << ","
                << contact.getWorkPhone() << ","
                << contact.getMobilePhone() << ","
                << contact.getAdditionalInfo() << "\n";
        }

        file.close();
        std::cout << "Data saved to file: " << filename << "\n";
    }
    else {
        std::cout << "Unable to open file for saving: " << filename << "\n";
    }
}

void PhoneBook::loadFromFile(const std::string& filename) {
    std::ifstream file(filename);

    if (file.is_open()) {
        contacts.clear();

        std::string line;
        while (getline(file, line)) {
            std::stringstream ss(line);
            std::string name, home, work, mobile, info;

            getline(ss, name, ',');
            getline(ss, home, ',');
            getline(ss, work, ',');
            getline(ss, mobile, ',');
            getline(ss, info, ',');

            Contact contact(name, home, work, mobile, info);
            addContact(contact);
        }

        file.close();
        std::cout << "Data loaded from file: " << filename << "\n";
    }
    else {
        std::cout << "Unable to open file for loading: " << filename << "\n";
    }
}
