#include<stdio.h>

int main(){
    int num1, num2, num3;

    printf("Enter your first number= ");
    scanf("%d", &num1);
    printf("Enter your second number= ");
    scanf("%d", &num2);
    printf("Enter your third number= ");
    scanf("%d", &num3);

    if ((num1 > num2 && num1 < num3) || (num1 < num2 && num1 > num3)) {
        printf("%d is the second largest number.\n", num1);
    } else if ((num2 > num1 && num2 < num3) || (num2 < num1 && num2 > num3)) {
        printf("%d is the second largest number.\n", num2);
    } else {
        printf("%d is the second largest number.\n", num3);
    }

    return 0;
}