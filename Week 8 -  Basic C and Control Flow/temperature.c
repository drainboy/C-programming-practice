#include <stdio.h>

int main(){
    int fahrenheit;
    float celsius;
    while(1){
        printf("Enter the temperature in degree F:\n");
        scanf("%d", &fahrenheit);

        if (fahrenheit==-1) break;
        
        celsius = (5.0/9)*(fahrenheit - 32);
        printf("Converted degree in C: %.2f\n", celsius);
    }
    return 0;
}