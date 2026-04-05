#include<stdio.h>
int main(){
    int nums[]={4,3,9,7,6,5};
    int sum=0;
    for(int i=0;i<6;i++){
        sum+=nums[i];
    }
    printf("Sum of numbers is: %d",sum);
    return 0;
}