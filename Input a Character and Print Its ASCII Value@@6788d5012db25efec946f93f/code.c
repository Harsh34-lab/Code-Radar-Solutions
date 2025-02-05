#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);  // Read the input character

    printf("The ASCII value of '%c' is %d\n", ch, ch);

    return 0;
}
