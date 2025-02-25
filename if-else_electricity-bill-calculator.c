#include <stdio.h>
int main() {
    int units;
    float pri;

    scanf("%d", &units);
    
    if(units<0){
        printf("Invalid Input!");
        return 0;
    }
    if(units >= 0 && units <= 100){
        pri = units * 5.0;
    } 
    else if(units > 100 && units <= 300) {
        pri = 500 + (units - 100) * 7.0;
    } 
    else if(units > 300){
        pri = 1900 + (units - 300) * 10.0;
    }

    if(pri <= 1200) {
        pri = pri-(pri)*0.1;
    }

    printf("The electricity bill is: %.2f.\n", pri);

    return 0;
}