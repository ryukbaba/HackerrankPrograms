#include<stdio.h>
int main(){
    int y;
    scanf("%d",&y);
    if(y<=0)
    {
        printf("The given year %d is Invalid year.",y);
    }
    else if(y%100==0 && y%400==0)
    {
        printf("Yes, %d is a leap year.",y);
    }
    else if(y%100!=0 && y%4==0)
    {
        printf("Yes, %d is a leap year.",y);
    }
    else{
        printf("No, %d is not a leap year.",y);
    }
}