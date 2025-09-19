#include <stdio.h>

int main() {
    int a = 10, b = 5;
    int sum = a + b;
    
    double c = 24.6, d = 9.3;
    double diff = c - d;
    
    float e = 10.25, f = 5.5;
    float div = e + f;
    
    char ch = 'a';
    
    
    printf("Sum of %d and %d is: %d\n", a, b, sum);
    printf("Difference of %lf and %lf is: %lf\n", c, d, diff);
    printf("Division of %f and %f is: %f\n", e, f, div);
    printf("The character is: %c\n", ch);
    
    return 0;
}