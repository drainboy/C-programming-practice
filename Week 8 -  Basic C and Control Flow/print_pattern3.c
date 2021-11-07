#include <stdio.h>

int main(){
    /*
    Write a program that reads an integer number (between 1 and 9), and displays a pattern
    according to the value of the number. For example, if the number is 9, then the
    following pattern should be printed:
    1
    23  
    345  
    4567  
    56789  
    678901  
    7890123  
    89012345  
    901234567
    */
    int height;

    printf("Enter the height:\n");
    scanf("%d", &height);

    printf("The pattern is:\n");

    for(int i=1;i<=height;i++){
        for(int inner=i;inner<i+i;inner++){
            if (inner>=10) printf("%d",inner%10);
            else printf("%d",inner);
        }
        printf("\n");
    }

    return 0;
}