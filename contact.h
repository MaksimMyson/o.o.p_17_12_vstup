#ifndef CONTACT_H
#define CONTACT_H

#include <iostream>
#include <string>

class Contact {
public:
    Contact(const std::string& name, const std::string& home, const std::string& work, const std::string& mobile, const std::string& info);

    std::string getFullName() const;
    std::string getHomePhone() const;
    std::string getWorkPhone() const;
    std::string getMobilePhone() const;
    std::string getAdditionalInfo() const;

private:
    std::string name;
    std::string homePhone;
    std::string workPhone;
    std::string mobilePhone;
    std::string additionalInfo;
};

#endif // CONTACT_H
