#include <stdio.h>
int main(){
    int times, current;
    float resistance, power_loss;
    printf("Enter the number of times:\n");
    scanf("%d", &times);

    for (int i=0;i<times;i++){
        printf("Enter the current:\n");
        scanf("%d", &current);

        printf("Enter the resistance:\n");
        scanf("%f", &resistance);

        power_loss = current*current*resistance;
        printf("The power loss: %.2f\n", power_loss);
    }

    return 0;
}