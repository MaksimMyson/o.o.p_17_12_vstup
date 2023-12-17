#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "contact.h"
#include <vector>

class PhoneBook {
public:
    void addContact(const Contact& contact);
    void removeContact(const std::string& name);
    void searchByName(const std::string& name) const;
    void displayAllContacts() const;
    void saveToFile(const std::string& filename) const;
    void loadFromFile(const std::string& filename);

private:
    std::vector<Contact> contacts;
};

#endif // PHONEBOOK_H
