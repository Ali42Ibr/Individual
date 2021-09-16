#include <stdio.h> 
#include "sorting.cpp" 

//test function

int main(){
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
        std::cout<< "Sorting function works.";
    }

    return 0;
}