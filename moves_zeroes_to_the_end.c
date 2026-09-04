# include <stdio.h>
int main(){
    int n;
    printf("enter no of element : ");
    scanf("%d",&n);
    int arr[n];
    printf("enter element: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int slow=0;
    for(int fast=0;fast<n;fast++){
        if(arr[fast]!=0){
            int temp=arr[fast];
            arr[fast]=arr[slow];
            arr[slow]=temp;
            slow++;
        }
    }
    printf("final array is: ");
    for(int i=0;i<n;i++){
        printf("%d\n",arr[i]);

    }
    return 0;
}