#include <vector>
#include <stdexcept>
#include "PositiveList.h"
using namespace std;
using namespace positivelist;

/**
* \namespace Asst04 PositiveList. This program has a class named Postive List
*  that contains methods for manipulating positive doubles in a list
* 
* @author Nick Flower
*/



double PositiveList::addPositive(double x){
    bool hasItem = false;
    if(x <= 0.0 || this->contains_(x) > -1){
        //Was non-positive or already contained - return 0.0
        return 0.0;
    }
    doubles_.push_back(x);
    return x;
}

double PositiveList::removePositive(double x){
    int position = this->contains_(x);
    if(position > -1){
        doubles_.erase(doubles_.begin()+position);
        return x;
    }
    //Failed to find matching double - return 0.0
    return 0.0;
}

double PositiveList::computeAverage(){
    double avg = 0.0;
    int size = doubles_.size();
    if(size == 0){
        throw std::domain_error("There are no positive numbers");
    }
    for(std::vector<double>::iterator iter = doubles_.begin(); iter != doubles_.end(); iter++) {
        avg += *iter;
    }
    return avg/double(size);
}

//Private list containing our positive doubles
std::vector<double> doubles_;

//Private method for seeing if a vector contains a given item
//Returns the index of the item, or -1 if not in the list
int PositiveList::contains_(double x){
    for(std::vector<double>::iterator iter = doubles_.begin(); iter != doubles_.end(); iter++) {
        if(*iter == x){
            return iter-doubles_.begin();
        }
    }
    return -1;
}    