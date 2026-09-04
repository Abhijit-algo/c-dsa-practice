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
    int target;
    printf("enter target: ");
    scanf("%d",&target);
    int flag=0;
    int left=0;
    int right=n-1;
    while(left<right){
        if(target==arr[left]+arr[right]){
            flag=1;
            break;
        }
        if(target<arr[left]+arr[right]){
            right--;
        }
        else{
            left++;
        }
    }
        if(flag==1){
            printf("target element is found\n");
            printf("two element are %d and %d at index %d and %d",arr[left],arr[right],left,right);
        }
        else{
            printf("target element is not found ");
        }
    
    return 0;
}