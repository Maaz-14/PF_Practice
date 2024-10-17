#include <stdio.h>

int main() {
    char original[] = "HELLO-WORLD";
    
    char reverse1[] = "DLROW";  // First part of reversed string
    char reverse2[] = "OLLEH";  // Second part of reversed string
    
    int length1 = 5;  // Length of "DLROW"
    int length2 = 5;  // Length of "OLLEH"
    
    int ascii_values[] = {68, 76, 82, 79, 87, 79, 76, 76, 69, 72};  // ASCII values for "DLROWOLLEH"
    
    char current_string[] = "HELLO-WORLD";
    int pos = 0;  // Position for current character guess
    int guess, i;
	int j;
    printf("String = %s\n", original);

    while (1) { // while (1) since 1 is constant so always true. Hence will run indefinite times until unless it is explicitly terminated(break;).
        // Prompt user to enter an ASCII code for the character at the current reversed position
        printf("Enter ASCII code for position %d: ", pos + 1);
        scanf("%d", &guess);

        // Check if the guessed ASCII matches the expected one
        if (guess == ascii_values[pos]) {
            current_string[pos] = (char)guess;
            printf("String = %s\n", current_string);
            pos++;  // Move to the next character

            // If the string is fully reversed, break out of the loop
            if (pos == 10) {
                printf("Final Output:\n");
                
                // Print the pattern for DLROW
                for (i = 0; i < length1; i++) {
                    for ( j = 0; j <= i; j++) {
                        printf("%c", reverse1[j]);
                    }
                    printf("\n");
                }

                // Print the pattern for OLLEH
                for (i = length2; i > 0; i--) {
                    for ( j = 0; j < i; j++) {
                        printf("%c", reverse2[j]);
                    }
                    printf("\n");
                }

                break;
            }
        } 
		else {
            // Reset the string if the guess is wrong
            printf("Wrong Guessing Reverting string back\n");
            pos = 0;  // Reset to start
            for (i = 0; i < 10; i++) {
                current_string[i] = original[i];  // Revert to the original string
            }
            printf("String = %s\n", current_string); // imp!!! will print the entire array. current_string[i] is wrong to use here.
        }
    }

    return 0;
}

