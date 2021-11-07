#include <stdio.h>

int main(){
    /*

    Write a program that first reads the total number of lists of numbers to be processed,
then reads in the specified number of lists of numbers accordingly, one list per line,
computes the total for each list and displays the total on the screen. For each list of
numbers, the first number indicates how many elements are in the list.

    */
    int num_lines, num_elements, dummy, total;

    printf("Enter number of lines:\n");
    scanf("%d", &num_lines);

    for (int i=1; i<=num_lines; i++){
        total = 0;
        printf("Enter line %d:\n", i);
        scanf("%d", &num_elements);

        for (int x=0; x<num_elements;x++){
            scanf("%d", &dummy);
            total += dummy;
        }

        printf("Total: %d\n", total);
    }

    return 0;
}