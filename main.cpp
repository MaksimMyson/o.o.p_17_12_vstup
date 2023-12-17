#include "phonebook.h"

int main() {
    PhoneBook phoneBook;

    Contact contact1("John Doe", "123-456-7890", "456-789-0123", "789-012-3456", "Friend");
    Contact contact2("Jane Smith", "111-222-3333", "444-555-6666", "777-888-9999", "Colleague");

    phoneBook.addContact(contact1);
    phoneBook.addContact(contact2);

    // Display all contacts
    std::cout << "All Contacts:\n";
    phoneBook.displayAllContacts();

    // Save data to file
    phoneBook.saveToFile("contacts.txt");

    // Load data from file
    phoneBook.loadFromFile("contacts.txt");

    // Display all contacts after loading from file
    std::cout << "\nAll Contacts After Loading:\n";
    phoneBook.displayAllContacts();

    return 0;
}
