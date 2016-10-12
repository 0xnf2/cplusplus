#include <stdexcept>
#include "Person.h"
using namespace std;
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
Person::Person(std::string name, std::string phone){
    name_ = name;
    phoneNumber_ = phone;
    emailaddrs_ = std::vector<std::string>();
}

/* private fields */
std::string name_;

std::string phoneNumber_;

std::vector<std::string> emailaddrs_;

/*Getters*/
std::string Person::getName(){
    return name_;
}

std::string Person::getPhoneNumber(){
    return phoneNumber_;
}

std::vector<std::string> Person::getEmailAddresses(){
    //TODO Sort this vector using alg library
    return emailaddrs_;
}

void Person::addEmail(std::string email){
    emailaddrs_.push_back(email);
}
