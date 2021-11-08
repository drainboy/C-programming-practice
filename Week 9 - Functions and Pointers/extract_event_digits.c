#include <stdio.h> 
#define INIT_VALUE 999 
int extEvenDigits1(int num); 
void extEvenDigits2(int num, int *result); 
int main() 
{ 
    int number, result = INIT_VALUE; 
        
    printf("Enter a number: \n"); 
    scanf("%d", &number); 
    printf("extEvenDigits1(): %d\n", extEvenDigits1(number));         
    extEvenDigits2(number, &result); 
    printf("extEvenDigits2(): %d\n", result); 
    return 0; 
} 
int extEvenDigits1(int num)  
{   
    int result=-1,position=1;

    while(1){
        if((num%10)%2==0){
            result += (num%10)*position;
            position = position*10;
        }
        num = num/10;
        if(num <= 0) break;
    }
    if(result!=-1) result += 1;

    return result;
} 
void extEvenDigits2(int num, int *result)  
{   
    int position=1;
    *result = -1;

    while(1){
        if((num%10)%2==0){
            *result += (num%10)*position;
            position = position*10;
        }
        num = num/10;
        if(num <= 0) break;
    }
    if(*result!=-1) *result += 1;
}