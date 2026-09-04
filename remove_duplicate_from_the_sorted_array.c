# include <stdio.h>
int main(){
    int n;
    printf("enter no of element: ");\
    scanf("%d",&n);
    int arr[n];
    printf("enter element: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int slow=0;
    for(int fast=1;fast<n;fast++){
        if(arr[fast]!=arr[slow]){
            slow++;
            arr[slow]=arr[fast];
        }
    }
    printf("final array after remove duplicate element: ");
    for(int i=0;i<=slow;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}