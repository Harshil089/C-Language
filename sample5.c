#include <stdio.h>

int main() {
    char *ptr;
    char myString[] = "abcdefg"; // Corrected the typo in the variable name
    ptr = myString;
    ptr += 5; // Moves the pointer 5 positions forward in the array

    printf("Pointer points to: %c\n", *ptr); // Prints the character 'f' as ptr now points to it

    return 0;
}
