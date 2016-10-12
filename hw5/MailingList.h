#ifndef ASST05_MAILINGLIST_H
#define ASST05_MAILINGLIST_H
#include <vector>
#include <string>
#include "Person.h"

namespace asst05{
    /**MailingList construct containing things like name and active subscriptions
    * @author Nick Flower
    */
    class MailingList{
        public:

            /** Constructor
            *   Takes the name of mailing list
            */
            MailingList(std::string name);
            /** 
            * getName
            * The getter for the mailing list name
            * @return name of this MailingList
            */
            std::string getName();
            /** 
            * subscribe
            * The method for subscribing to the mailing list
            * @param email email address to subscribe.
            */
            void subscribe(std::string email);
            /**
            * getSubscriptionAddresses
            * Returns a list containing all of the email addresses of a specified person 
            * that are in the mailing list
            * @param person ???.
            * @return List of email addresses for the person specified
            */
            std::vector<std::string> getSubscriptionAddresses(Person person);

        private:
            /** The name of the mailing list */
            std::string listName_;
            /** List of subscribers to this mailing list */
            std::vector<std::string> subscribers_;        
    };
}
#endif