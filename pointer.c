#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  //creating first array and filling it w random values
  int array[10];
  srand(time(NULL)); 
  int counter = 0;
  while(counter<9){
    array[counter] = (int)(rand());
    counter+= 1;
  }
  array[9] = 0;
  
  //creating second array and reversing first array
  counter = 0;
  int array2[10];
  int *pointer;
  while(counter <10){
    pointer = &array[counter];
    array2[9-counter] = *pointer;
    counter+=1;
  }
  
  //printing both arrays
  counter = 0;
  printf("The original array:\n");
  while(counter<10){
    printf("arr[%d]: %d\n", counter + 1, array[counter]);
    counter +=1;
  }
  counter = 0;
  printf("The second array:\n");
  while(counter<10){
    printf("arr2[%d]: %d\n", counter + 1, array2[counter]);
    counter +=1;
  }  
  return 0;

}
