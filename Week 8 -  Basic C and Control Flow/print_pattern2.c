#include <stdio.h>

int main(){

    /*

    Write a program that reads an integer number (between 1 and 9) as its parameter, and
    prints a pattern with the specified number. No need to check errors on user input. For
    example, if the number is 9, the following pattern will be printed:

    A
    BA
    ABA
    BABA
    ABABA
    BABABA
    ABABABA
    BABABABA
    ABABABABA
    */

    int height;
    char letter;

    printf("Enter the height:\n");
    scanf("%d", &height);

    printf("The pattern is:\n");

    for(int i=1;i<=height;i++){
        letter = (i%2==0) ? 'B':'A';

        for (int inner=1;inner<=i;inner++){
            printf("%c", letter);
            letter = letter=='A' ? 'B' : 'A';
        }

        printf("\n");
    }

    return 0;
}