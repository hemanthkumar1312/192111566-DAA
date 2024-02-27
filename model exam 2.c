#include <stdio.h>
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}
int main() {
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    if (num < 0) {
        printf("enter a positive integer.");
    } else {
        printf("The Factorial of %d is %d", num, factorial(num));
    }
    return 0;
}
