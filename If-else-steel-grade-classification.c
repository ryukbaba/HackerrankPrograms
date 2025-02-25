#include <stdio.h>
int main() {
    int h, t,f = 0;
    float c;
    scanf("%d %f %d", &h,&c,&t);
    if(h > 50){
        f++;
    }
    if(c < 0.7){
        f++;
    }
    if(t > 5600){
        f++;
    }

    if(f == 3){
        printf("The grade of the steel is: 10\n");
        printf("All of the conditions met.\n");
    } 
    else if(f == 2){
        if(h > 50 && c < 0.7){
            printf("The grade of the steel is: 9\n");
            printf("Two conditions met.\n");
        } 
        else if(c < 0.7 && t > 5600){
            printf("The grade of the steel is: 8\n");
            printf("Two conditions met.\n");
        }
        else{
            printf("The grade of the steel is: 7\n");
            printf("Two conditions met.\n");
        }
    }
    else if(f == 1){
        printf("The grade of the steel is: 6\n");
        printf("Only one condition met.\n");
    }
    else{
        printf("The grade of the steel is: 5\n");
        printf("None of the conditions met.\n");
    }

    return 0;
}