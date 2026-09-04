#include <stdio.h>

int main() {
    int n;

    printf("enter no of element: ");
    scanf("%d", &n);

    int arr[n];

    printf("enter element: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int left = 0;
    int right = n - 1;

    int left_max = 0;
    int right_max = 0;

    int total = 0;

    while(left < right) {

        if(arr[left] <= arr[right]) {

            if(arr[left] >= left_max) {
                left_max = arr[left];
            }
            else {
                total += left_max - arr[left];
            }

            left++;
        }

        else {

            if(arr[right] >= right_max) {
                right_max = arr[right];
            }
            else {
                total += right_max - arr[right];
            }

            right--;
        }
    }

    printf("total water = %d", total);

    return 0;
}