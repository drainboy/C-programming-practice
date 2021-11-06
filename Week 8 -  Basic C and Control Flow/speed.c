#include <stdio.h>

int main(){
    int distance, time, times;
    float speed;
    printf("Enter the number of times:\n");
    scanf("%d", &times);

    for(int i=0;i<times;i++){
        printf("Enter distance (in km):\n");
        scanf("%d", &distance);

        printf("Enter time (in sec):\n");
        scanf("%d", &time);

        speed = (float)distance/time;

        printf("The speed is: %.2f km/sec\n", speed);

    }
}