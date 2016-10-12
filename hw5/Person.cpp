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

Person::Person(std::string name){
    name_ = name;
}

std::string name_;

std::string phoneNumber_;

std::vector<std::string> emailaddrs_;

std::string Person::getName(){
    return "";
}

std::string Person::getPhoneNumber(){
    return "";
}

std::vector<std::string> Person::getEmailAddresses(){

}

void Person::addEmail(std::string email){

}
