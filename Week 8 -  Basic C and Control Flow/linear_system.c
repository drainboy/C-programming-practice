#include <stdio.h>
#include <math.h>

int main(){
    int a1, b1, c1, a2, b2, c2;
    float x, y, denominator;

    printf("Enter a1,b1,c1,a2,b2,c2:\n");
    scanf("%d %d %d %d %d %d", &a1, &b1, &c1, &a2, &b2, &c2);

    denominator = a1*b2-a2*b1;

    if (!denominator){
        printf("Denominator is zero!");
    }
    else{
        x = (float)(b2*c1-b1*c2)/denominator;
        y = (float)(a1*c2-a2*c1)/denominator;

        printf("x=%.2f,y=%.2f",x,y);
    }
}