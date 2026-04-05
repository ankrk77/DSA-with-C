#include <stdio.h>
#include <stdbool.h>

// Mock API provided by the problem
bool isBadVersion(int version) {
    int firstBad = 4; // Example: Version 4 is the first bad one
    return version >= firstBad;
}

int firstBadVersion(int n) {
    int left = 1;
    int right = n;
    
    while (left < right) {
        // Prevent overflow
        int mid = left + (right - left) / 2;
        
        if (isBadVersion(mid)) {
            // If mid is bad, the first bad version is mid or to the left
            right = mid;
        } else {
            // If mid is good, the first bad version must be to the right
            left = mid + 1;
        }
    }
    // When left == right, we've found the first bad version
    return left;
}

int main() {
    int n = 5;
    int result = firstBadVersion(n);
    printf("The first bad version is: %d\n", result);
    return 0;
}
