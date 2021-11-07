#include <stdio.h>

int main(){
    int hours;
    float gross=0, tax=0, net=0;

    printf("Enter hours of work:\n");
    scanf("%d", &hours);

    if (hours > 40) gross = 40 * 6 + (hours - 40) * (1.5 * 6);
    else gross = hours * 6;

    if (gross < 1000) tax = 0.1 * gross;
    else if (gross < 1500) tax = 0.1 * 1000 + 0.2 * (gross - 1000);
    else tax = 0.1 * 1000 + 0.2 * 500 + 0.3 * (gross - 1500);

    net = gross - tax;

    printf("Gross pay=%.2f\n", gross);
    printf("Tax=%.2f\n", tax);
    printf("Net pay=%.2f\n", net);

    return 0;
}