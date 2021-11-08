#include <stdio.h> 
#include <math.h>

int reverseDigits1(int num); 
void reverseDigits2(int num, int *result);

int main() 
{ 
    int num, result=999; 
    

    printf("Enter a number: \n"); 
    scanf("%d", &num);      
    printf("reverseDigits1(): %d\n", reverseDigits1(num)); 
    reverseDigits2(num, &result); 
    printf("reverseDigits2(): %d\n", result); 
    return 0; 
} 
int reverseDigits1(int num) 
{ 
    int result = 0, length = 0, copy_num = num;

    while(copy_num){
        length++;
        copy_num = copy_num/10;
    }

    for(int i=length-1;i>=0;i--){
        result += (num%10)*pow(10,i);
        num = num/10;
    }

    return result;
} 
void reverseDigits2(int num, int *result) 
{ 
    int length = 0, copy_num = num;
    *result = 0;

    while(copy_num){
        length++;
        copy_num = copy_num/10;
    }

    for(int i=length-1;i>=0;i--){
        *result += (num%10)*pow(10,i);
        num = num/10;
    }
}