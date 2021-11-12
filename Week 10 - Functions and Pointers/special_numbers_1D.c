#include <stdio.h>
#include <math.h>

void specialNumbers1D(int ar[], int num, int *size); 

int main()  
{ 
    int a[20],i,size=0,num; 
        

    printf("Enter a number (between 100 and 999): \n"); 
    scanf("%d", &num); 
    specialNumbers1D(a, num, &size); 
    printf("specialNumbers1D(): "); 
    for (i=0; i<size; i++)      
        printf("%d ",a[i]); 
    printf("\n");  
    return 0; 
} 

void specialNumbers1D(int ar[], int num, int *size) 
{ 
    int hundreds, tens, ones, cubed_h, cubed_t, cubed_o;
    for (int i=100;i<=num;i++){
        hundreds = i/100;
        tens = (i/10)%10;
        ones = i%10;

        cubed_h = pow(hundreds, 3);
        cubed_t = pow(tens, 3);
        cubed_o = pow(ones, 3);

        // printf("hundreds=%d tens=%d ones=%d\n", hundreds, tens, ones);
        // printf("cubed_h=%d cubed_t=%d cubed_o=%d\n", cubed_h, cubed_t, cubed_o);
        // printf("total = %d\n", cubed_h+cubed_t+cubed_o);

        if(i == (cubed_h+cubed_t+cubed_o)){
            ar[*size] = i;
            (*size)++;
        }
    }
} 