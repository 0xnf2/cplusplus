#include <vector>
#include <stdexcept>
#include "MailingList.h"
#include "Person.h"
using namespace std;
using namespace asst05;
using std::string;
using std::vector;

/**
* \namespace asst05 MailingList. Contains the Mailing List class which
*  has methods for manipulating Persons and subscriptions
* 
* @author Nick Flower
*/

MailingList::MailingList(std::string name){
    listName_ = name;
    subscribers_ = std::vector<std::string>();
}

/* Fields */
std::string listName_;

std::vector<std::string> subscribers_;

/* Getters */
std::string MailingList::getName(){
    return listName_;
}

/* Adders */
void MailingList::subscribe(std::string email){
    subscribers_.push_back(email);
}

std::vector<std::string> MailingList::getSubscriptionAddresses(Person p){
    return std::vector<std::string>(); //TODO this is NYI - use Algorithm library to match this.emais with p.emails
}
   