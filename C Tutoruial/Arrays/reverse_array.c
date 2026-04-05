#include<stdio.h>
int main(){
    int nums[]={5,9,3,7,4,8,1,5};
    int i;
    int length=sizeof(nums)/sizeof(nums[0]);
    for(i=length-1;i>=0;i--){
        printf("%d",nums[i]);
        if(i>0){
            printf(",");
        }
    }
    return 0;
}