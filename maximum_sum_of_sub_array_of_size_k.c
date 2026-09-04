# include <stdio.h>
int main(){
    int n;
    printf("enter no of element: ");
    scanf("%d",&n);
    int arr[n];
    printf("enter element: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int k;
    printf("enter k: ");
    scanf("%d",&k);
    int sum=0;
    int max=0;
    for(int i=0;i<k;i++){
        sum+=arr[i];

    }
     max=sum;
    int left=0;
    int right=k-1;
    while(right<n-1){
        left++;
        right++;
        sum=sum-arr[left-1]+arr[right];
        if(max<sum){
            max=sum;
        }
    }
    printf("maximum sub array:%d ",max);
    return 0;

}