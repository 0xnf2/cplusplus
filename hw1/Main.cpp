#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;

/**
* \namespace Asst01 Reverse Concat 5 Strings. This program accepts 5 lines of input
* then prints two copies of the concatenation of each string separated by spaces, in reverse of order received.
* ex: 
*   in: 'o l l e h'
*   out: 'h e l l o'
*        'h e l l o'
* @author Nick Flower
*/

/**
* Main program for the reverse concat 5 strings program
* @return exit status. Normal is 0.
*/
int main(){
    string arr[5] = {}; //Our array of 5 strings that we will operate on
    cout << "Please enter 5 strings" << endl;
    //Requesting a new string 5 times
    for(int i = 0; i < 5; i++){
        cout << "String " << i+1 << ": ";
        char t[100] = {}; //String goes here
        cin.getline(t, sizeof(t)); //Read from console and put into t
        arr[i] = t; //add t to the string array
    }    
    string concat = ""; //String that will be concatenated onto
    //Concatenating 5 times
    for(int i = 4; i >= 0; i--){
        concat += arr[i] + " ";
    }
    concat = concat.substr(0,concat.length()-1); //Getting rid of trailing space
    cout << endl << concat << endl <<  concat << endl << endl; //Printing the concatenated string twice 
    return 0; //No error return code
}
