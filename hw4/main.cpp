#include <iostream>
#include <stdexcept>
#include "PositiveList.h"
using std::cin;
using std::cout;
using std::endl;
using std::string;
using namespace positivelist;

/**
* \namespace Asst04 Positive List. This program has a class named Postive List
*  that contains methods for manipulating positive doubles in a list
* 
* @author Nick Flower
*/

/**
* Main program for the Arrange Words By Length
* @return exit status. Normal is 0.
*/
int main(){
    PositiveList pl = PositiveList();

    //Testing addPositive
    //Scenarios:
    //  1. Adding a pos => pos
    //  2. Adding another pos => pos
    //  3. Adding duplicate pos => 0
    //  4. Adding neg => 0
    double eight = 8.0;
    double ninetyone = 91.2;
    double sixtysix = 66.96;
    double negone = -1.0;
    cout << "successfully created a positive list" << endl;
    double added8 = pl.addPositive(eight);
    cout << "Added double 8.0 and got back " << added8 << endl;
    double added91 = pl.addPositive(ninetyone);
    cout << "Added double 91.2 and got back " << added91 << endl;
    double added66 = pl.addPositive(sixtysix);
    cout << "Added double 66.96 and got back " << added66 << endl;
    double added66Again = pl.addPositive(sixtysix);
    cout << "Added double 66.96 again and got back " << added66Again << endl;
    double addedNeg1 = pl.addPositive( negone);
    cout << "Added double -1 and got back " << addedNeg1 << endl;
    
    //Testing Remove
    //Scenarios:
    //  1. Removing existing number -> number
    //  2. Removing non-existing number -> 0
    double removed8 = pl.removePositive(eight);
    cout << "Removed double 8.0 and got back " << removed8 << endl;
    double removed8Again = pl.removePositive(eight);
    cout << "Removed double 8.0 and got back " << removed8Again << endl;

    //Testing Average
    //Scenarios:
    //  1. Success
    //  2. Exception
    try {
        double avgA = pl.computeAverage();
        cout << "Calculating average of [92.2, 66.96]. Got: " << avgA << endl;
    }catch (const std::domain_error e){
        std::cerr << e.what() << endl;
    }

    PositiveList pl0 = PositiveList();
    try{
        cout << "Calculating average of []: ";
        double avg0 = pl0.computeAverage();
    }catch (const std::domain_error e){
        std::cerr << e.what() << endl;
    }

    return 0; //No error return code
}
