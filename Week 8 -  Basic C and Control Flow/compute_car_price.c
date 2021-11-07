#include <stdio.h>

int main(){
    int list_price, car_category, coe;
    float total_price, discounted_price;

    printf("Please enter the list price:\n");
    scanf("%d", &list_price);

    printf("1. Car (1600 c.c. & below) & Taxi\n");
    printf("2. Car (above 1600 c.c.)\n");
    printf("3. Goods Vehicle & Bus\n");
    printf("4. Motorcycle\n");

    printf("Please enter the category:\n");
    scanf("%d", &car_category);

    if (car_category == 1) coe = 70000;
    else if (car_category == 2) coe = 80000;
    else if (car_category == 3) coe = 23000;
    else if (car_category == 4) coe = 600;

    discounted_price = 0.9 * list_price;
    total_price = discounted_price + (0.03 * discounted_price) + coe;
    if (discounted_price > 100000) total_price += 0.1 * discounted_price;

    printf("Total price is $%.2f", total_price);

    return 0;
}