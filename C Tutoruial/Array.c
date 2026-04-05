// create a program that calculates the average of different ages:
// #include<stdio.h>
// int main(){
//     float sum=0,Avg=0;
//     int age[]={20,56,82,69,37,28,83,99};
//     int length= sizeof(age)/sizeof(age[0]);
//     for(int i=0; i<length; i++){
//         sum += age[i]; 
//     }
//     Avg=sum/length;

//     printf("Sum is: %f\n",sum);
//     printf("Average is: %f",Avg);
//     return 0;
// }


//create a program that finds the lowest age among different ages:

// #include<stdio.h>
// int main(){
//     int ages[]={85,34,76,28,73,18,86,89,65};
//     int lowestAge =ages[0];
//     int lenght = sizeof(ages)/sizeof(ages[0]);
    
//     for(int i=0;i<lenght;i++){
//         if(ages[i]<lowestAge){
//             lowestAge=ages[i];
//         }
//     }
//     printf("Lowest age is: %d",lowestAge);
//     return 0;
// }

// a list of numbers. We skip negative values, but stop the loop completely if we find a zero:

// #include<stdio.h>
// int main(){
//     int nums[]={5,-8,9,0,7,-2};
//     int lenght = sizeof(nums)/sizeof(nums[0]);
//     for(int i=0; i<lenght; i++){
//         if(nums[i]<0){
//             continue;
//         }
//         if(nums[i]==0){
//             break;
//         }
//         printf("%d\n",nums[i]);
//     }
//     return 0;
// }


// #include<stdio.h>
// int main (){
//     int nums[]={6,5,8,2,7};
//     int sum=0;
//     int lenght=sizeof(nums)/sizeof(nums[0]);
//     for(int i=0;i<lenght;i++){
//         sum+=nums[i];
//         printf("%d\n",sum);
//     }
//     return 0;
// }

// find number in Array.

// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//     int *nums;
//     int count;
//     int findNum;
//     int flag=0;
//     printf("Enter your count: ");
//     scanf("%d",&count);
//     if(count<=0){
//         printf("Count is invailid.");
//         return 1;
//     }
    
//     nums=(int *)malloc(count * sizeof(int));
//     if(nums==NULL){
//         printf("Memory allocation failed.");
//         return 1;
//     }
    
//     printf("Attension! Enter only Real number\n");
//     for(int i=0; i<count; i++){
//         printf("Enter Number:");
//         scanf("%d",&nums[i]);
        
//     }
    
//     for(int i=0;i<count;i++){
//         printf("Num[%d]=%d\n",i,nums[i]);
//     }
//     printf("Enter number for find: ");
//     scanf("%d",&findNum);
    
//     for(int i=0; i<count; i++){
//         if(nums[i]==findNum){
//         flag=1;
//         printf("Number is found at Index: %d\n",i);
        
//         }
//     }
//     if(flag){
//         printf("Number is in list.");
//     }else{
//         printf("Number is not in list.");
//     }
    
    
//     free(nums);
    
    
//     return 0;
// }


