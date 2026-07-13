#include <stdio.h>
#include <ctype.h>

int main() {
    int size;

    printf("Enter the size of the string: ");
    scanf("%d", &size);

    char string[size + 1];

    printf("Enter the string: ");
    scanf("%s", string);

	int i;
    for (i = 0; string[i] != '\0'; i++) {
        string[i] = toupper((unsigned char)string[i]);
    }

    printf("The String after converting to upper case: %s\n", string);

    return 0;
}
