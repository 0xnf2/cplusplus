#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::string;

/**
* \namespace Asst02 Arrange Words By Length. This program accepts 1 line of input
* and prints the longest word and the shortest word in the input. 
* If there are no words in the input print, then nothing and return status 1.  
* If more than one word has the same length as the shortest word, then print the first one. 
* Similarly for the longest word.
* 
* ex: 
* in: 
*   The quick brown fox jumped over the lazy dog
* out: 
*   Shortest word is The 
*   Longest word is jumped
* @author Nick Flower
*/

/**
* Main program for the Arrange Words By Length
* @return exit status. Normal is 0, no words in input is 1.
*/
int main(){
    cout << "Please enter a sentence" << endl;
    string sentence;
    //Get the sentence from standard input
    std::getline(cin,sentence);
    //Declare what delimeter splits a string
    char delim = ' ';
    //Check that the string meets our programs requirements
    if(sentence.length() == 0  || sentence.find(delim) == string::npos){
        return 1;
    }
    //Set default values for comparisons
    std::size_t start = 0;
    std::size_t end = 0;
    string maxString; //Size = 0 so first comparison is necessarily larger
    string minString = sentence; //Size is size of string so first comparison is necessarily less
    while(end != string::npos){ //Loop through the string
        end = sentence.find(delim, start); //End index of the delimeter
        if(end != start){ //If not at end of string then...
            string s = sentence.substr(start,end-start); //Get the substring
            if(s.length() > maxString.length()){ maxString = s; } //Check that substr is greater length than previous maximum substring
            if(s.length() < minString.length()){ minString = s; } //Check that substr is shorter than previous minimum substring
        }
        start = end+1; 
    }
    cout << "Shortest word is " << minString << endl;
    cout << "Longest Word is " << maxString << endl;
    return 0; //No error return code
}
