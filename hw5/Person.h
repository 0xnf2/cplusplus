#ifndef ASST05_PERSON_H
#define ASST05_PERSON_H
#include <vector>
#include <string>


/**
* \namespace asst05 Person. Contains the Person class which
*  has methods for getting their data and adding to their subscriptions
* 
* @author Nick Flower
*/


namespace asst05{
    /**Person construct containing things like name, phone number, and what mailing lists they are a part of.
    * @author Nick Flower
    */
    class Person{
        public:
            /**
            * Constructor
            * Takes name and phone number(as string), does not take email.
            * @param name name of this person.
            * @param phone phone number of this person.
            * @return Person a newly created Person.
            */
            Person(std::string name, std::string phone) noexcept;

            /**
            * Get name
            * Getter for name.
            * @return the name of this person.
            */
            std::string getName() const noexcept;

            /**
            * Get Phone Number
            * Getter for phone number
            * @return phone number of this person.
            */
            std::string getPhoneNumber() const noexcept;

            /**
            * Get Email Addresses
            * Getter for email addresses associated with this person._Advance
            * Not marked as const because will sort the list alphabetically upon invocation
            * if the list is not sorted already.
            * @return list of email addresses for this Person.
            */
            std::vector<std::string> getEmailAddresses() noexcept;

            /**
            * Add Email
            * Adds to this Person's emails.
            * @param email the email to associate.
            * @return void.
            */
            void addEmail(std::string email) noexcept;

        private:
            /**
            * name
            * Private name, not available for editing.
            */
            std::string name_;
            /**
            * phine number
            * Private phone , not available for editing.
            */
            std::string phoneNumber_;
            /**
            * email addresses
            * Private emails, not available for editing.
            */
            std::vector<std::string> emailaddrs_;
            
    };
}

#endif