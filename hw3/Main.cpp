#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

/**
* \namespace Asst03 Arrange Words into Rowspanned Table. This program accepts 1 line of input
* of an arbitrary number of delimited words, with each set of 5 words denoting one row, 
* and constructs an HTML table that contains those rows of words.
* If a the same word is in the same position as the row above it, that cell is spans an additional
* column, rather than creating a new entry.
* 
* ex: 
* in: 
*   A B C D E
*   A P C Q E
*   A B C D E
*   W B C Z X
* out: 
* 
* @author Nick Flower
*/

/**
* Main program for the Arrange Words By Length
* @return exit status. Normal is 0, no words in input is 1.
*/
int main(){
    string sentence;
    //Get the sentence from standard input
    std::getline(cin,sentence);
    //Declare what delimeter splits a string
    char delim = ' ';
    //Check that the string meets our programs requirements
    if(sentence.length() == 0  || sentence.find(delim) == string::npos){
        return 1;
    }
    vector< vector<string> > rows;
    vector<string> currentRow;
    size_t end = 0;
    size_t start = 0;
    while(end != string::npos){ //Loop through the string
        end = sentence.find(delim, start); //End index of the delimeter
        if(end != start){ //If not at end of string then...
            string s = sentence.substr(start,end-start); //Get the substring
            if(currentRow.size() < 5){ 
                currentRow.push_back(s); //Push five items onto the current row
            }else{
                rows.push_back(currentRow); //Once five items are on the current row, push the row to Rows
                currentRow = vector<string>(); //Reset the vector pointer
            }
        }
        start = end+1; 
    }
    vector<string> html; //our rows of html
    for(int i = 0; i < rows.size(); i++){ //Going through the Rows
        for(int j = 0; j < rows[i].size(); j++){ //going through cells of row
            if(i != rows.size()-1){ //Don't check below the bottom row
                string shtml;
                int k = 0;
                while(rows[i][j] == rows[i+k][j]){
                    k+=1;
                }
                shtml = "<tr><th rowspan=\""+std:to_string(k)+"\">"+rows[i][j]+"</th></tr>";
                html.add(shtml);
            }
        }

    }

    return 0; //No error return code
}
