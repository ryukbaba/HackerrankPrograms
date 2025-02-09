#include <stdio.h>

int main() {
    float income, tax = 0.0;
    scanf("%f", &income);
    if(income<0)
    {
        printf("INVALID");
        return 0;
    }
    
    if (income <= 250000) {
        tax=0.0;
    } 
    else if (income>250000 && income <= 500000) {
        tax = (income - 250000) * 0.05;
    } 
    else if (income>500000 && income <= 1000000) {
        tax = 12500 + (income - 500000) * 0.20;
    } 
    else if(income>1000000){
        tax = 112500 + (income - 1000000) * 0.30;
    }

    printf("%.2f\n", tax);

    return 0;
}