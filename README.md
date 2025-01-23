# CS121 Project 2 - Bubbles and Pointers
## Overview and Goals
This project focuses on exploring the fundamentals of programming in C. In this, we will explore the relationship between arrays and pointers while also practicing reading and understanding psuedocode. We are given the following basic algorithm:

```
constant MAX is max length of array
function sort (array):
	create integer variables i and j
	for i from zero to MAX - 1:
	if array[j]>array[j+1]:
		swap array[j] with array[j+1]
		printArray(array)
```

This algorithm assumes there are two other functions:

- printArray(array): given an array, print values of the array in a single line for debugging purposes
- swap(a, b): given pointers to variables a and b, swaps their values so that a contains the starting value of b and b contains the starting value of a. 

We are then given a small amount of starter code:

```
void printValues(int*);

void sort(int*);

void swap(int*, int*);

int main(){
	int values[] = {7, 3, 9, 4, 6, 1, 2, 8, 5};
	printf("Before: \n");
	printValues(values);

	// test swap
	int x = 3;
	int y = 5;
	printf("x: %d, y:%d \n", x, y);
	swap(&x, &y);
	printf("x: %d, y: %d \n", x, y);

	sort(values);
	printf("After: \n");
	printValues(values);
	
	return(0);
} //end main

```
 
There are several key snippets in this piece:

- Provides array to work with 
- Tests the printValues function 
- Tests the swap function
- Tests the sort function

Order to work in:

1. printValues

2. swap

3. sort

## printValue Function

The basic objective of the printValue function is to print the values of the array in a single line. This function will be primarily used for debugging purposes. 

From there, we can assume a few key components of the function:
- A pointer that allows us to determine where in memory each value is. We splat the pointer to get the value at that position. 
- A for loop that will allow us to step through the array.
- We want to then print each value on a single line using printf. 

### Pseudocode

```

Start for loop to iterate between each item in values:
	Print value of item at the pointer
	Print address of item
	Iterate through pointers in values

```

## Swap Function

The basic opjective of the swap function is when given pointers to variables a and b, the function should swap their values so that a contains the starting value of b and b contains the starting value of a. 

Key components of the function:
- Pointers to variables a and b
- A temporary variable because if not, when you go to swap, a-->b, but b-->b. 

### Pseudocode

```
Swap function takes two integer values (NOT addresses)
	Establish temporary variable. Assign the value of a to the 	temporary variable.
	Assign value of b to value of a.
	Assign value of a (stored in temp) to value of b.
```

## Sort Function

The basic objective of the sort function is to compare each value and get each value in numerical order.

### Pseudocode

```
constant MAX is max length of array
function sort(array);
	create integer variables i and j
	for i from zero to MAX - 1:
		for j from zero to MAX -1:
			if array[j]>array[j+1]:
				swap array[j] with array[j+1]
				printArray(array)
```
 
