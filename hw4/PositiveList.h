#ifndef POSITIVELIST_POSITIVELIST_H
#define POSITIVELIST_POSITIVELIST_H
#include <vector>

namespace positivelist{
    /**List construct that gives us some rudimentary operations over doubles.
    * @author Nick Flower
    */
    class PositiveList{

        public:
            /** Default constructor **/
            //PositiveList();
        
            /** 
            * Add Positive
            * If the double being added is not positive, then the double is ignored 
            * and returns 0.0
            *
            * If the double being added is positive but is equal to one that is already 
            * stored in your PositiveList object, then the double is ignored and the 
            * method does not change the doubles stored in this object
            * and returns 0.0
            *
            * Otherwise, the double is stored in the object and the method
            * returns the double that was added
            * @param x the double to add.
            * @return 0.0 for non-valid or duplicate doubles, otherise the added input
            */
            double addPositive(double x);

            /**
            * Remove Positive 
            * The method allows one to remove a positive double from 
            * this PositiveList
            *
            * If the double to be removed is not equal to one that is stored in 
            * this PositiveList object, then the double is ignored and the 
            * method does nothing except return 0.0
            *
            * Otherwise, the double that is currently stored and is equal to 
            * the double to be removed is removed from the doubles that 
            * are stored in this PositiveList object and the double is 
            * returned by the method
            * @param x the double to remove.
            * @return 0.0 for non-valid doubles, otherwise the removed double
            */
            double removePositive(double x);

            /**
            * Compute Average
            * Compute the average value of all the positive doubles that 
            * are stored in your PositiveList object and return the
            * average value
            *
            * If there are no positive doubles stored in this PositiveList object, 
            * then throw an exception with the message “There are no positive numbers”
            * @return the average value of the List
            * @throws exception if there are no positive doubles in the List
            */
            double computeAverage();

        private:
            //Private list containing our positive doubles
            std::vector<double> doubles_;

            //Private method for sseeing if a vector contains a given item
            //Returns the index of the item, or -1 if not in the list
            int contains_(double x);
        

    };
}
#endif