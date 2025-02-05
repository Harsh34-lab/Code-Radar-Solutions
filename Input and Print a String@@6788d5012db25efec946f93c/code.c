#include <stdio.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    gets(str);  // Read the input string

    printf("You entered: %s\n", str);

    return 0;
}