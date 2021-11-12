#include <stdio.h>
#include <math.h>

float absolute_sum_1D(int size, float vector[]);


int main(){
    float vector[10];
    int i, size;

    printf("Enter vector size: \n");
    scanf("%d", &size);

    printf("Enter %d data: \n", size);

    for (i=0;i<size;i++)
        scanf("%f", &vector[i]);

    printf("absolute_sum_1D(): %.2f\n", absolute_sum_1D(size, vector));

    return 0;
}


float absolute_sum_1D(int size, float vector[]){
    float total = 0.0;

    for(int i=0;i<size;i++){
        total += fabs(vector[i]);
    }

    return total;
}