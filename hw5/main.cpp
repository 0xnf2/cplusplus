#include <iostream>
#include "MailingList.h"
#include "Person.h"
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
using namespace asst05;


//TODO
//4. Documentation on methods and fields

/**
* Main program for the Asst05 Mailing Lists and Person classes
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
    jboyle.addEmail("cork@nobility.org");
    jboyle.addEmail("boyle@example.org");

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

    //Subscribing emails to mailing lists
    dracula.subscribe("erzebet@example.org");
    dracula.subscribe("cork@nobility.org");

    irish.subscribe("boyle@example.org");
    irish.subscribe("lambart@example.org");
    irish.subscribe("digby@example.org");
    irish.subscribe("guinness@example.org");

    hungarian.subscribe("ecsed@nobility.org");

    //Lists for our main testing
    vector<Person> people = {jboyle, rlambart, edigby, gguinness, berzebet, alasgrimaldi};
    vector<MailingList> lists = {dracula, irish, hungarian};
    //Assembling HTML tables
    //Making the header
    string htmlstring = "<table border='1'>\n    <tr><th>Person</th><th>Phone Number</th>";
    for(int i = 0; i < lists.size(); i++){
        string headerstring = "<th>" + lists[i].getName() + "</th>";
        htmlstring += headerstring;
    }
    htmlstring+="</tr>";
    //Making the rows
    for(int i = 0; i < people.size(); i++){
        Person p = people[i];
        string subscriptionString = "";
        //Nested loop to check for which mailing lists a person may be subscribed to under different aliases
        for(int k = 0; k < lists.size(); k++){
            subscriptionString += "<td>";
            if(!lists[k].getSubscriptionAddresses(p).empty()){
                subscriptionString += "yes";
            }else{
                subscriptionString += "no";
            }
            subscriptionString += "</td>";
        }
        htmlstring += "\n    <tr><td>" + p.getName() + "</td><td>" + p.getPhoneNumber() + "</td>"+ subscriptionString + "</tr>";
    }
    //Final concatenation
    htmlstring += "\n</table>";

    //Printing it out
    cout << htmlstring << endl;
 
    return 0; //No error return code

}
