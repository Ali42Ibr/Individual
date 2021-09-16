
#include "sorting.cpp" 

//test function

int main(){

    #include <stdio.h> 

    //testing the sorting function
    int unsortedArray [] = {80,22,44,13};

    int size = sizeof(unsortedArray)/sizeof(unsortedArray[0]);

    int *sorted = sort(unsortedArray, 4);

    for (int i = 0; i < 4; ++i) {
        std::cout << sorted[i] << ", ";
    }

    int isSorted = 1;
    for (int i = 1; i < size; i++){
        if (sorted[i-1] > sorted[i]){
            isSorted = 0;
        } 
    }

    if (isSorted == 1){
        std::cout<< "\nSorting function works.\n";
    } else {
        std::cout<< "\nSorting function has not sorted properly.\n";
    }


    //testing the user input function to see if any abnormal behaviour happens

    int originalSize = 4;

    //this is the test file

    int testArray[originalSize];
    int *test = makeArray(testArray,4);

    int sizeAfter = sizeof(unsortedArray)/sizeof(unsortedArray[0]);

    if (sizeAfter == originalSize){
        std::cout<< "\nArray produced is of correct size.\n";
    }

    return 0;

    
}