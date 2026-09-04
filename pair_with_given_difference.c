# include<stdio.h>
int main(){
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
    int flag=0;
    int left=0;
    int right=n-1;
    while(left<right){
        if(target==arr[right]-arr[left]){
            flag=1;
            break;

        }
        else if(target<arr[right]-arr[left]){
            right--;
        }
        else{
            left++;
        }

        
    }
    if(flag==1){
        printf("tardet is found\n");
        printf("two no are %d and %d at index %d and %d\n",arr[right],arr[left],right,left);

    }
    else{
        printf("target is not found");
    }
    return 0;

}