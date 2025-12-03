#include<stdio.h>
int main(){
int num1 = 8;
int num2 = 6;
num2 = num1 - num2;
num1 = num1 - num2;
num2= num1 + num2;
printf("Num1 is %d\n", num1);
printf("Num2 is %d", num2);
return 0;
}