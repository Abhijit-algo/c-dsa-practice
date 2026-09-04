# include <stdio.h>
int main (){
    int n;
    printf("enter no of element : ");
    scanf("%d",&n);
    int arr[n];
    printf("enter element : ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int target;
    printf("enter target: ");
    scanf("%d",&target);
    int slow=0;
    for(int fast=0;fast<n;fast++){
        if(arr[fast]!=target){
          
            arr[slow]=arr[fast];
             slow++;
        }
    }
    printf("final array after remove duplicate array: ");
    for(int i=0;i<slow;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}