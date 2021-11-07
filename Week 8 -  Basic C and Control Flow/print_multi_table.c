#include <stdio.h>

int main(){

    /*
    Write a C program that asks the user to input a positive number between 1 and 9, reads
    the number from the user and prints the multiplication table of the input number.
    */

    int user_number;

    printf("Enter a number (between 1 and 9):\n");
    scanf("%d", &user_number);

    printf("Multiplication Table:\n   |\t");
    
    for (int i=1; i<=user_number; i++){
        printf("%d\t|\t",i);
    }
    printf("\n");

    for (int outer=1; outer<=user_number; outer++){
        printf(" %d |",outer);
        for (int inner=1; inner<=outer; inner++){
            printf("\t%d\t", outer*inner);
        }
        printf("\n");
    }

    

    return 0;
}