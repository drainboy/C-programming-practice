#include <stdio.h>
#include <ctype.h>

int main(){
    char character;

    printf("Enter a character:\n");
    scanf("%c", &character);

    if (isdigit(character)) printf("Digit");
    else if (isupper(character)) printf("Upper case letter");
    else if (islower(character)) printf("Lower case letter");
    else printf("Other character");

    return 0;
}