#include <algorithm>
#include "Person.h"
using namespace asst05;
using std::string;
using std::vector;

/**
* \namespace asst05 Person. Contains the Person class which
*  has methods for getting their data and adding to their subscriptions
* 
* @author Nick Flower
*/

/* Constructor */
Person::Person(string name, string phone) noexcept{
    name_ = name;
    phoneNumber_ = phone;
    emailaddrs_ = vector<string>();
}

/* private fields */
string name_;
string phoneNumber_;
vector<string> emailaddrs_;

/*Functions*/
string Person::getName() const noexcept{
    return name_;
}

string Person::getPhoneNumber() const noexcept{
    return phoneNumber_;
}

vector<string> Person::getEmailAddresses() noexcept{
    //If the list isn't sorted yet, sort it now.
    //Prof said 'use a flag', but we can just check is_sorted instead.
    if(!is_sorted(begin(emailaddrs_), end(emailaddrs_))){
        sort(emailaddrs_.begin(), emailaddrs_.end());        
    }
    return emailaddrs_;
}

void Person::addEmail(string email) noexcept{
    emailaddrs_.push_back(email);
}
