#ifndef ASST05_PERSON_H
#define ASST05_PERSON_H
#include <vector>
#include <string>

namespace asst05{
    /**Person construct containing things like name, phone number, and what mailing lists they are a part of.
    * @author Nick Flower
    */
    class Person{
        public:
            Person(std::string name, std::string phone);

            std::string getName();

            std::string getPhoneNumber();

            std::vector<std::string> getEmailAddresses();

            void addEmail(std::string email);

        private:
            std::string name_;
            std::string phoneNumber_;
            std::vector<std::string> emailaddrs_;
            
    };
}

#endif