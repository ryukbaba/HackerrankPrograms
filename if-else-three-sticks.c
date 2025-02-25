#include <stdio.h>

int main() {
    int a, b, c,f;
    scanf("%d %d %d", &a, &b, &c);
    printf("Lengths: [%d, %d, %d]\n", a, b, c);
    
    if (a > b)
    { 
        f = a;
        a = b;
        b = f; 
    }
    if (b > c) 
    { 
        f = b;
        b = c;
        c = f;
    }
    if (a > b)
    { 
        f = a;
        a = b;
        b = f;
    }
    
    if (a + b <= c) {
        printf("Type: Invalid\nCannot form a valid shape.");
    } else if (a == b && b == c) {
        printf("Type: Equilateral\nAll sides are of the same length.");
    } else if (a == b || b == c || a == c) {
        printf("Type: Isosceles\nExactly two sides are equal.");
    } else {
        printf("Type: Scalene\nAll sides are of different lengths.");
    }
    return 0;
}
