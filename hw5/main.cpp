#include <iostream>
#include <stdexcept>
#include "MailingList.h"
#include "Person.h"
using std::cin;
using std::cout;
using std::endl;
using std::string;
using namespace asst05;

/**
* Main program for the Mailing Lists and Person classes
* @return exit status. Normal is 0.
*/
int main(){

    //Creating our base Mailing Lists
    MailingList dracula = MailingList("Dracula");
    MailingList irish = MailingList("Irish Nobility");
    MailingList hungarian = MailingList("Hungarian Nobility");

    //Creating out Persons
    Person jboyle = Person("John Boyle", "555-1000");
    Person rlambart = Person("Robert Lambart", "555-1001");
    Person edigby = Person("Edward Digby", "555-1002");
    Person gguinness = Person("Gwendolen Guinness", "555-1003");
    Person berzebet = Person("Bathory Erzebet", "555-1004");
    Person alasgrimaldi = Person("Antoinette Louise Alberte Suzanne Grimaldi", "555-1005");

    //Adding email addresses
    jboyle.addEmail("boyle@example.org");
    jboyle.addEmail("cork@nobility.org");

    rlambart.addEmail("lambart@example.org");
    rlambart.addEmail("cavan@nobility.org");

    edigby.addEmail("digby@example.org");
    edigby.addEmail("digby@nobility.org");

    gguinness.addEmail("guinness@example.org");
    gguinness.addEmail("iveagh@nobility.org");

    berzebet.addEmail("erzebet@example.org");
    berzebet.addEmail("ecsed@nobility.org");

    alasgrimaldi.addEmail("grimaldi@example.org");
    alasgrimaldi.addEmail("massy@nobility.org");    

    return 0; //No error return code

}
