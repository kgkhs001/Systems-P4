Author: Krishna Garg

Programs:

sorttest - 

Description: 
This program takes in a list of integers, sorts them in descending order, and then prints the time it took to sort the array

How to build:
linking:
sorttest: sorttest.o sort.o timesort.o
	gcc -g sorttest.o sort.o timesort.o -o sorttest

compiling:
sorttest.o: sorttest.c sort.h
	gcc -g -c --std=gnu89 sorttest.c

How to use: ./sorttest (some random numbers you want sorted)


sorttest2 - 

Description: 
This program takes in two integers in a specific order:
	1st number inputted: How many numbers you want generated
	2nd number inputted: which sorting algorithm you want to use (1 = index bubble sort, 2 = pointer bubble sort)

How to build:
linking:
sorttest2: sorttest2.o sort.o timesort.o
	gcc -g sorttest2.o sort.o timesort.o -o sorttest2

compiling:
sorttest2.o: sorttest2.c sort.h
	gcc -g -c --std=gnu89 sorttest2.c

Timing Results:
1 = sorting with indexes
2 = sorting with pointers
----------------------------------------------------------------------------------------------------------------------------------------------------------
Test
./sorttest2 10000 1

Result
Seconds: 0 Microseconds: 275982
----------------------------------------------------------------------------------------------------------------------------------------------------------
Test
./sorttest2 10000 2

Result
Seconds: 0 Microseconds: 268745
----------------------------------------------------------------------------------------------------------------------------------------------------------
Test
./sorttest2 100000 1

Result
Seconds: 26 Microseconds: 43503
----------------------------------------------------------------------------------------------------------------------------------------------------------
Test
./sorttest2 100000 2

Result
Seconds: 24 Microseconds: 147991
----------------------------------------------------------------------------------------------------------------------------------------------------------
Findings on timing of each sorting functions:
Based off of my examinations of the two sorting algorithms it is clear that when dealing with large datasets using bubble sort with pointers is somewhat faster than 
bubble sort based off of indexes. 

The most notable difference being when given a hundred thousand numbers the pointer based bubble sort is two seconds faster 

Even when given smaller datasets the pointer based bubble sort was faster by 7000 microseconds


