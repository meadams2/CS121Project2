#include <stdio.h>
const int MAX=9

void printValues(int*);
void sort(int*);
void swap(int*, int*);

int main(){
	int values[] = {7, 3, 9, 4, 6, 1, 2, 8, 5};
	printf("Before: \n");
	printValues(values);

	// test swap
//	int x = 3;
//	int y = 5; 
//	printf("x: %d, y: %d \n", x, y);
//	swap(&x, &y);
//	printf("x: %d, y: %d \n", x, y);

//	sort(values);
//	printf("After: \n");
//	printValues(values);

	return(0);
} // end main

int printValues(int*){
	for (i = 0; i < MAX; i++){
		printf("%d", i, values[i]);
		return(0);
	}// end for loop
}// end printValues


