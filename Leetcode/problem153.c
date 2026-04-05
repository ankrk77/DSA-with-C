#include<stdio.h>
int maximum(int nums[],int n){
    int left = 0;
    int right = n-1;
    while(left<right){
        int mid = (left+right)/2;
        if(nums[left]>nums[right]){
            if(nums[mid-1]<nums[mid]){
                right=mid-1;
            }else{
                left=mid;
            }
        }else{
            if(nums[mid+1]<nums[mid]){
                left=mid+1;
            }else{
                right=mid;
            }
        }
    }
}

int main(){
    int nums[]={7,8,9,1,2,3,4,5};
    int n = sizeof(nums)/sizeof(nums[0]);
    int result = maximum(nums , n);
    printf("The maximum is %d\n",result);

    return 0;
}