#include <algorithm>
#include "MailingList.h"
#include "Person.h"
using namespace asst05;
using std::string;
using std::vector;

/**
* \namespace asst05 MailingList. Contains the Mailing List class which
*  has methods for manipulating Persons and subscriptions
* 
* @author Nick Flower
*/

//Constructor
MailingList::MailingList(string name) noexcept{
    listName_ = name;
    subscribers_ = vector<string>();
}

/* Fields */
string listName_;
vector<string> subscribers_;

/* Functions */
string MailingList::getName() const noexcept{
    return listName_;
}

void MailingList::subscribe(string email) noexcept{
    subscribers_.push_back(email);
}

vector<string> MailingList::getSubscriptionAddresses(Person p) const noexcept{
    vector<string> matches = vector<string>();
    //For each email in Person, check if that email is in this.subscribers. If so, append each matching email to a new return vector
    vector<string> emails = p.getEmailAddresses();
    std::for_each(begin(emails), end(emails), //Use a cool lambda to do it. 
        [this, &matches](string email){ //Capture (this) so we have access to subscribers_, and capture matches, so we can append to the local var
            if(std::find(begin(subscribers_), end(subscribers_), email) != end(subscribers_)){
                matches.push_back(email);
            }
        }
    );
    return matches;
}
   