#include <stdio.h>

int main() {
    int n1;
    printf("enter no of element of first array : ");
    scanf("%d", &n1);
    int arr1[n1];
    printf("enter element of first array : ");
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    int n2;
    printf("enter no of element of second array : ");
    scanf("%d", &n2);
    int arr2[n2];
    printf("enter element of second array : ");
    for (int j = 0; j < n2; j++) {
        scanf("%d", &arr2[j]);
    }

    int result[n1 + n2];
    int i = 0;
    int j = 0;
    int k = 0;

    
    while (i < n1 && j < n2) {
        if (arr1[i] < arr2[j]) {
            if (k == 0 || result[k - 1] != arr1[i]) {
                result[k] = arr1[i];
                k++;
            }
            i++;
        } 
        else if (arr1[i] > arr2[j]) {
            if (k == 0 || result[k - 1] != arr2[j]) {
                result[k] = arr2[j];
                k++;
            }
            j++;
        } 
        else {
            if (k == 0 || result[k - 1] != arr1[i]) {
                result[k] = arr1[i];
                k++;
            }
            i++;
            j++;
        }
    } 

    
    while (i < n1) {
        if (k == 0 || result[k - 1] != arr1[i]) { 
            result[k] = arr1[i];
            k++;
        }
        i++;
    }

    
    while (j < n2) {
        if (k == 0 || result[k - 1] != arr2[j]) { 
            result[k] = arr2[j];
            k++;
        }
        j++;
    }

    printf("union of two sorted array : ");
    for (int m = 0; m < k; m++) { 
        printf("%d ", result[m]); 
    }
    
    return 0;
}
