#include <iostream>

//sort function
int *sort(int arr[], int size) {
  
  //outer function iterates through the entire array
  for (int i = 0; i < size; i++){
      //inner function puts the largest element at the end of the array then decreases iterations by one
      for (int j = 1; j < size-i; j++){
          if (arr[j] < arr[j-1]){
              //swaps if adjacent elements are in wrong order
              std::swap(arr[j],arr[j-1]);
          }
      }
  }

  return arr;
}