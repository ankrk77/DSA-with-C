//Reverse Array and print.

#include<stdio.h>
int main(){
    int arr[] = {6,11,7,4,8,9};
    int start=0;
    int end=5;
    while (start<end){
        arr[start] = arr[end] + arr[start];
        arr[end] = arr[start] - arr[end];
        arr[start] = arr[start] - arr[end];
        start++;
        end--;
    }
    for(start = 0; start<=5; start++){
        printf("%d ",arr[start]);
    }
    return 0;
}