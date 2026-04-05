// Count digits in a number
#include<stdio.h>

int countdigit(int num){
    if(num==0) return 0;
      return 1 + countdigit(num/10);
}

int main(){
    int num;
    printf("Enter your number");
    scanf("%d",&num);
    
    if(num == 0)
        printf("Digits = 1");
    else
        printf("Digits = %d", countdigit(num)); 
    return 0;
}