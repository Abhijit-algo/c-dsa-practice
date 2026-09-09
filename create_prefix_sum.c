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
    
    int prefix[n]; 
    prefix[0] = arr[0]; 
    
    
    for(int i = 1; i < n; i++) { 
        prefix[i] = prefix[i-1] + arr[i]; 
    } 
    
    printf("prefix sum is: "); 
    for(int i = 0; i < n; i++) { 
        
        printf("prefix[%d]=%d\n ", i,prefix[i]); 
    } 
    
    return 0; 
}

