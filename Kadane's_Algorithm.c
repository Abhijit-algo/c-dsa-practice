#include <stdio.h>

int maxSubArraySum(int arr[], int n) {
    int maxSoFar = arr[0];
    int currentMax = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > currentMax + arr[i]) {
            currentMax = arr[i];
        } else {
            currentMax = currentMax + arr[i];
        }

        if (currentMax > maxSoFar) {
            maxSoFar = currentMax;
        }
    }

    return maxSoFar;
}

int main() {
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    int maxSum = maxSubArraySum(arr, n);
    printf("Maximum contiguous subarray sum is: %d\n", maxSum);

    return 0;
}
