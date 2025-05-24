//wap to add to numbers
#include <stdio.h>
int add(int a, int b) {
    return a + b;
}
int main() {
    int num1, num2, sum;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    sum = add(num1, num2);
    printf("Sum: %d\n", sum);
    //subtraction
    int difference = num1 - num2;
    printf("Difference: %d\n", difference);
    return 0;
}