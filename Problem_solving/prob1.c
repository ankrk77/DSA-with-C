// #include<stdio.h>
// int main (){
// // int nums[]={2,3,-2,4};
// // int ans = __INT_MAX__;
// // for(int i=0;i<4;i++){
// //     if(nums[i]<ans){
// //         ans=nums[i];
// //     }
    
// // }
// // printf("%d",ans);
// char str[50];
// printf("Enter your String: ");
// scanf("%s",str);
// printf("%s",str);
// return 0;
// }


#include <stdio.h>
#include <stdlib.h>
int main() {
    char *str = NULL;  
    char ch;          
    int size = 0;       
    printf("Enter a sentence: "); 
    while ((ch = getchar()) != '\n') {  
        str = realloc(str, size + 2);  
        if (str == NULL) {
            printf("Memory allocation failed\n");
            return 1;
        }
        str[size] = ch; 
        size++;
    }
    str[size] = '\0';
    printf("You entered: %s\n", str);
    free(str);
    return 0;
}