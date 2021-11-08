#include  <stdio.h> 
int allOddDigits1(int num);  
void allOddDigits2(int num, int *result);     
int main() 
{ 
    int number, p=999, result=999; 
    

    printf("Enter a number: \n"); 
    scanf("%d", &number); 
    p = allOddDigits1(number); 
    if (p == 1) 
        printf("allOddDigits1(): yes\n"); 
    else 
        printf("allOddDigits1(): no\n"); 
    allOddDigits2(number, &result); 
    if (result == 1) 
        printf("allOddDigits2(): yes\n"); 
    else 
        printf("allOddDigits2(): no\n"); 
    
    return 0; 
} 
int allOddDigits1(int num)  
{ 
    while(1){
        if((num%10)%2==0) break;
        num = num/10;
        if(num<=0) return 1;
    }
    return 0;
} 
void allOddDigits2(int num, int *result)  
{ 
    *result = 0;
    while(1){
        if((num%10)%2==0) break;
        num = num/10;
        if(num<=0){
            *result = 1;
            break;
        }
    }
}