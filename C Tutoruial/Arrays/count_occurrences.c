#include <stdio.h>

int main() {
    int arr[100], n, num, count = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter number to count: ");
    scanf("%d", &num);

    for(int i = 0; i < n; i++) {
        if(arr[i] == num) {
            count++;
        }
    }

    printf("%d occurs %d times in the array.\n", num, count);
    return 0;
}
