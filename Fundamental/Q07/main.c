#include <stdio.h>

int main () {

    int num1, num2, temp;
    
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("\n");

    printf("\tBefore swap\n\n");
    printf("\t%d     %d\n\n", num1, num2);

    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("\tAfter swap\n\n");
    printf("\t%d     %d\n", num1, num2);


    return 0;
}