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

//takes user input
int *makeArray(int arr[],int size) {
  
    std::cout<<"Please input "<<size<<" integers\n";

    int count = 0;

    int userInput = 0;

    while (count < size){
      std::cin>>userInput;
      
      arr[count] = userInput;

      count++;
    }

     return arr;
}

int main() {
    
    int arr[4];
    int *unsortedArray = makeArray(arr,4);

    int *ptr = sort(unsortedArray, 4);

    for (int i = 0; i < 4; ++i) {
        std::cout << ptr[i] << ", ";
    }


    return 0;
}