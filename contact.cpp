#include "contact.h"

Contact::Contact(const std::string& name, const std::string& home, const std::string& work, const std::string& mobile, const std::string& info)
    : name(name), homePhone(home), workPhone(work), mobilePhone(mobile), additionalInfo(info) {}

std::string Contact::getFullName() const {
    return name;
}

std::string Contact::getHomePhone() const {
    return homePhone;
}

std::string Contact::getWorkPhone() const {
    return workPhone;
}

std::string Contact::getMobilePhone() const {
    return mobilePhone;
}

std::string Contact::getAdditionalInfo() const {
    return additionalInfo;
}
