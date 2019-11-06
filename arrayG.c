/*
	Name: Tyler Ailes
	Class: CSCI 155
	Date: Oct 16, 2019
	Desc: Prints array's based on user input
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int menu_num = 11;
	int i; // inference number
	int array[20];
	const int SIZE = 20;
	int value;
	int random_val;
	int sum = 0;
	int index;
	int changed_val = 0;
	int temp_val = 0;
	int searched_val = 0;
	int found_val = 0;
	
	while (menu_num != 9) {
		// outputting menu
		printf("What do you want to do?\n");
		printf("1. All 0s\n");
		printf("2. Increasing\n");
		printf("3. Random\n");
		printf("4. Average\n");
		printf("5. Change value\n");
		printf("6. Flip\n");
		printf("7. Negate\n");
		printf("8. Search\n");
		printf("9. Exit\n");
		scanf("%d", &menu_num);
		
		
		if (menu_num == 1) { // All 0s
			// makes array all 0s
			for (i = 0; i < SIZE; i++) {
				array[i] = 0;
			}
			
			// prints array
			printf("[");
			for (i = 0; i < SIZE-1; i++) {
				printf("%d, ", array[i]);
			}
			printf("%d]\n\n", array[SIZE-1]);
		}
		
		if (menu_num == 2) { // Increasing
			// getting starting value
			printf("Enter Starting Value\n");
			scanf("%d", &value);
			
			// assigning array
			for (i = 0; i < SIZE; i++) {
				array[i] = value + i;
			}
			
			// prints array
			printf("[");
			for (i = 0; i < SIZE-1; i++) {
				printf("%d, ", array[i]);
			}
			printf("%d]\n\n", array[SIZE-1]);
		}
		
		if (menu_num == 3) { // Random
			// assigning array
			for (i = 0; i < SIZE; i++) {
				random_val = (rand() % 101); // random value 0 to 100
				array[i] = random_val;
			}
			
			// prints array
			printf("[");
			for (i = 0; i < SIZE-1; i++) {
				printf("%d, ", array[i]);
			}
			printf("%d]\n\n", array[SIZE-1]);
		}
		
		if (menu_num == 4) { // Average
			// assigning array
			for (i = 0; i < SIZE; i++) {
				sum = sum + array[i];
			}
			
			printf("Average is %lf\n", (double)sum/SIZE);
			
			// prints array
			printf("[");
			for (i = 0; i < SIZE-1; i++) {
				printf("%d, ", array[i]);
			}
			printf("%d]\n\n", array[SIZE-1]);
		}
		
		if (menu_num == 5) { // Change Values
			// getting value to change
			printf("What index to change?\n");
			scanf("%d", &index);
			
			if (index < 0 || index > 19) { // making sure index is valid
				while (index < 0 || index > 19) {
					printf("Invalid entry, try again\n");
					printf("What index to change?\n");
					scanf("%d", &index);
				}
			}
			
			printf("\nWhat value to put in index %d?\n", index);
			scanf("%d", &changed_val);
			
			array[index] = changed_val;
			
			// prints array
			printf("[");
			for (i = 0; i < SIZE-1; i++) {
				printf("%d, ", array[i]);
			}
			printf("%d]\n\n", array[SIZE-1]);
		}
		
		if (menu_num == 6) { // Flip
			// reverses array
			for (i = 0; i < (SIZE / 2); i++) {
				temp_val = array[i];
				array[i] = array[SIZE - 1 - i];
				array[SIZE - 1 - i] = temp_val;
			}
			
			// prints array
			printf("[");
			for (i = 0; i < SIZE-1; ++i) {
				printf("%d, ", array[i]);
			}
			printf("%d]\n\n", array[SIZE-1]);
		}
		
		if (menu_num == 7) { // Negate
			for (i = 0; i < SIZE; i++) {
				array[i] = array[i] * -1;
			}
			
			// prints array
			printf("[");
			for (i = 0; i < SIZE-1; i++) {
				printf("%d, ", array[i]);
			}
			printf("%d]\n\n", array[SIZE-1]);
		}
		
		if (menu_num == 8) { // Search
			// outputting question
			printf("What value to search for? \n");
			scanf("%d", &searched_val);
			
			for (i = 0; i < SIZE; i++) { // scanning array
				if (array[i] == searched_val) {
					found_val = found_val + 1;
				}
			}
		
			printf("Total number of value: %d\n", found_val);
			
			// prints array
			printf("[");
			for (i = 0; i < SIZE-1; i++) {
				printf("%d, ", array[i]);
			}
			printf("%d]\n\n", array[SIZE-1]);
		}
	
		if (menu_num < 1 || menu_num > 9) { // makes sure entry is on menu
			printf("Invalid entry, try again\n");
		}
			
	}
	
	
	printf("Thank you, and Have a great day!\n:D\n\n");
	
	
	return 0;
}

//E