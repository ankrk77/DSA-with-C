//Find given number in array and return index.

#include<stdio.h>
int main(){
    int arr[] =  {5,9,7,3,6,7,21,56,48,34,20,5};
    int find = 90;
    int found = 0;
    int i;
    for(i = 0; i<12;i++){
        if(arr[i]==find){
            printf("%d", i);
            found = 1;
            break;
        }
        
    }
    if(found == 0){
        printf("Element not found!");
    }
    return 0;
}