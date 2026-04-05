#include <stdio.h>
#include<stdlib.h>
int main() {
    int *nums;
    int count;
    int i;

    printf("Number of element:");
    scanf("%d",&count);
    if(count<=0){
        printf("Number is invailid.");
        return 1;
    }

    nums=(int*)malloc(count * sizeof(int));
    if(nums == NULL){
        printf("Memory allocation is failed.");
        return 1;
    }
    
    for(i=0;i<count;i++){
        printf("Enter number:");
        scanf("%i",&nums[i]);
    }
    printf("Your numbers are:\n");
    for ( i = 0; i < count; i++)
    {
        printf("%d ",nums[i]);
    }
    

    printf("\neven numbers in array are: ");
    for(i=0;i<count;i++){
        if(nums[i]%2 == 0){
            printf("%d, ",nums[i]);
        }
    }

    printf("\nOdd numbers in array are: ");
    for(i=0;i<count;i++){
        if(nums[i]%2 != 0){
            printf("%d, ",nums[i]);
        }
    }


    free(nums);
    return 0;
}
