#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/* Program which reads numbers from the command line,
 * outputs them, sorts them in descending order, and outputs the sorted list.
 *
 * Usage:
 *         ./sorttest2 (length of randomly generated list of numbers) (which function you want to use)...
 * Example:
 *         ./sorttest2 10 1 
 * 	   ./sorttest2 10 2
 *
 */

/** Main program
 * @param argc Number of words on the command line
 * @param argv[] Array of character strings, the words from the command line.
 * @return 0 if success, 1 if error (wrong number of arguments)
 */

int main (int argc, const char* argv[]){
  // Check that there are at least two number
  int num_nums = argc - 1;
  if (num_nums != 2) { 
    printf("Must enter 2 numbers on the command line! Exiting.\n");
    return 1; // Indicate failure
  }
  
  srand(time(NULL));
  int *nums; // space to store numbers entered from the command line.
  int size = atoi(argv[1]);
  int func = atoi(argv[2]);
  int i; // array index 

  // Allocate an array big enough to hold the numbers
  nums = (int*) calloc(size, sizeof(int));
  if (nums == NULL) {
    fprintf(stderr, "Unable to allocate enougn memory to hold the numbers.\n");
  }
  
  for(i = 0; i < size; i++){
  	nums[i] = rand_int_gen(100);
  }
  
  // Now print, sort, and print the array, and time how long the sorting took.
  if(func == 1 || func == 2){
  	timesort(nums, size, func);
  }
  else{
  	printf("Please enter 1 or 2 as the second arguement\n");
  	return 1;
  }
  

  return 0; // Indicate success!
}
