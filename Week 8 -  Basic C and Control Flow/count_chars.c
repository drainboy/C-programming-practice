#include <stdio.h>
#include <ctype.h>

int main(){
    int digit_count=0, letters_count=0;
    char character;

    printf("Enter your characters (# to end):\n");

    while(1){
        scanf("%c", &character);

        if (character=='#') break;

        if (isalpha(character)) letters_count++;
        else if (isdigit(character)) digit_count++;
    }

    printf("The number of digits: %d\n", digit_count);
    printf("The number of letters: %d\n", letters_count);

    return 0;
}