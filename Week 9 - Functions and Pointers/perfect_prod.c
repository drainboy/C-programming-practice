#include <stdio.h> 
int perfectProd1(int num); 
void perfectProd2(int num, int *prod); 
int main() 
{ 
    int number, result=0;       
            
    printf("Enter a number: \n"); 
    scanf("%d", &number); 
    printf("Calling perfectProd1() \n"); 
    printf("perfectProd1(): %d\n", perfectProd1(number)); 
        
    printf("Calling perfectProd2() \n"); 
    perfectProd2(number, &result); 
    printf("perfectProd2(): %d\n", result); 
    return 0; 
}


int perfectProd1(int num)
{ 
    int product_of_perfect=1;
    for(int i=1; i<=num; i++){
        int sum_of_factors=0;

        for(int factor=1; factor<=(i/2);factor++){
            if (i%factor==0)
                sum_of_factors += factor;
        }

        if (sum_of_factors == i){
            product_of_perfect *= i;
            printf("Perfect number: %d\n", i);
        }
   }

   return product_of_perfect;
} 


void perfectProd2(int num, int *prod) 
{  
    *prod = 1;
    for(int i=1; i<=num; i++){
            int sum_of_factors=0;

            for(int factor=1; factor<=(i/2);factor++){
                if (i%factor==0)
                    sum_of_factors += factor;
            }

            if (sum_of_factors == i){
                *prod *= i;
                printf("Perfect number: %d\n", i);
            }
    }
}