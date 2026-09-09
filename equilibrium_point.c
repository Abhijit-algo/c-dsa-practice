# include <stdio.h>
int main(){
    int n;
    printf("enter no of element: ");
    scanf("%d",&n);
    int arr[n];
    int sum=0;
    printf("enter element: ");
    for(int i=0;i<n;i++){
        scanf("%d",& arr[i]);
    }
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }

    int left_sum=0;
    int right_sum=0;
    int equilibrium_point=-1;
    int flag=0;
    for(int i=0;i<n;i++){
        int right_sum=sum-left_sum-arr[i];
        if(left_sum==right_sum){
            equilibrium_point=i;
            flag=1;
            break;
        }
    
    left_sum+=arr[i];
    }
    if(flag==1){
        printf("equilibrium point is %d",equilibrium_point);
    }
    else{
        printf("equilibrium point is not find");
    }
    return 0;

}