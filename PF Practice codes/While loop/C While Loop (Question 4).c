#include <stdio.h>

int main() {
    int userInput;          // Variable to store user input
    int previousNumbers[100]; // Array to store previous entered numbers
    int hasDuplicate = 0;   // Flag to track if a duplicate is found
    int index = 0;          // Index to keep track of the current position in the array
	int i;
    printf("Input numbers (stop if you input a duplicate):\n");

    // Start a while loop to continue until a duplicate is entered
    while (!hasDuplicate) { //(NOT operator yeild only 0 or 1. Hence it is used as a FLAG!!)
        printf("Input a number: ");
        int readStatus = scanf("%d", &userInput);  // Read the user input

        // Check if the input is a valid integer
        if (readStatus != 1) { //(0) HENCE FALSE!!
            printf("Invalid input. Please enter a valid integer.\n");

            // Clear the input buffer
            while (getchar() != '\n'); // getchar() is a function that reads a single character from the standard input (usually the keyboard).The while loop continues to execute as long as the character read by getchar() is not equal to '\n', which is the newline character.
            continue; //  If we don't clear the input buffer, the next iteration of the loop will read the leftover newline character as the next input, which is not what we want.
        }

        // Check if the current input is equal to any of the previous numbers
        for (i = 0; i < index; i++) { // (int i=0;....) would yield an error in DEV C++ HENCE DO NOT declare the type in for loop!!
            if (userInput == previousNumbers[i]) {
                hasDuplicate = 1;  // Set the flag to indicate a duplicate is found
                printf("Duplicate number entered. Program will stop.\n");
                break;  // Exit the loop when a duplicate is found
            }
        }

        previousNumbers[index++] = userInput;  // Store the current input in the array
    	
	}
	// Print the array
    printf("Previous numbers entered: ");
    for (i = 0; i < index; i++) {
        printf("%d ", previousNumbers[i]);
    }
    printf("\n");
    return 0;  // Indicate successful program execution
}

