#include <stdio.h>
#define PI 3.1416

int main(){
    int times, radius, height;
    float volume, surface_area;
    printf("Enter the number of times:\n");
    scanf("%d", &times);

    for(int i=0;i<times;i++){
        printf("Enter the radius:\n");
        scanf("%d", &radius);

        printf("Enter the height:\n");
        scanf("%d", &height);

        volume = PI*radius*radius*height;
        surface_area = (2*PI*radius*height) + (2*PI*radius*radius);

        printf("The volume is: %.2f\n", volume);
        printf("The surface area is: %.2f\n", surface_area);

    }
}