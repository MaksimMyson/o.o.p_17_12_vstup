#include "phonebook.h"

int main() {
    PhoneBook phoneBook;

    int choice;
    do {
        std::cout << "\nPhonebook Menu:\n"
            << "1. Add Contact\n"
            << "2. Display All Contacts\n"
            << "3. Save to File\n"
            << "4. Load from File\n"
            << "5. Exit\n"
            << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
        case 1: {
            std::string name, home, work, mobile, info;
            std::cin.ignore(); // Clear newline from previous input
            std::cout << "Enter Full Name: ";
            std::getline(std::cin, name);
            std::cout << "Enter Home Phone: ";
            std::getline(std::cin, home);
            std::cout << "Enter Work Phone: ";
            std::getline(std::cin, work);
            std::cout << "Enter Mobile Phone: ";
            std::getline(std::cin, mobile);
            std::cout << "Enter Additional Info: ";
            std::getline(std::cin, info);

            Contact newContact(name, home, work, mobile, info);
            phoneBook.addContact(newContact);
            break;
        }
        case 2:
            std::cout << "All Contacts:\n";
            phoneBook.displayAllContacts();
            break;
        case 3:
            phoneBook.saveToFile("contacts.txt");
            break;
        case 4:
            phoneBook.loadFromFile("contacts.txt");
            std::cout << "\nAll Contacts After Loading:\n";
            phoneBook.displayAllContacts();
            break;
        case 5:
            std::cout << "Exiting the program.\n";
            break;
        default:
            std::cout << "Invalid choice. Please enter a number between 1 and 5.\n";
        }
    } while (choice != 5);

    return 0;
}
