#include <stdio.h>
#include <math.h>

int main(){
    int x1, x2, y1, y2, times;
    float distance;
    printf("Enter the number of times:\n");
    scanf("%d", &times);

    for(int i=0;i<times;i++){
        printf("Enter first point x1 y1:\n");
        scanf("%d %d", &x1, &y1);

        printf("Enter second point x2 y2:\n");
        scanf("%d %d", &x2, &y2);

        distance = sqrt(pow(x1-x2,2.0) + pow(y1-y2, 2.0));

        printf("The distance is: %.2f\n", distance);

    }
}