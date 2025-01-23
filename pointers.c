// CS121 Bubbles and Pointers
// Working version as of 1.22.2025 

#include <stdio.h>
const int MAX=9;

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
	printf("x: %d, y: %d \n", x, y);
	swap(&x, &y);
	printf("x: %d, y: %d \n", x, y);

	sort(values);
	printf("After: \n");
	printValues(values);

	return(0);
} // end main

void printValues(int* array){
	int i = 0;
	for (i; i < MAX; i++){
		printf("%d", array[i]);
	}// end for loop
	printf("\n"); // want new line to prevent me from going crazy
}// end printValues

void swap(int* a, int* b){
	int temporary = *a;
	*a = *b;
	*b = temporary;
} // end swap

void sort(int* array){
	int i;
	int j;
	for(i = 0; i < MAX - 1; i++){
		for(j = 0; j < MAX - i - 1; j++){
			if (array[j] > array[j+1]){
				swap(&array[j], &array[j+1]);
				printValues(array);
				} // if statement
		} // for loop
	} // for loop
} // end sort
