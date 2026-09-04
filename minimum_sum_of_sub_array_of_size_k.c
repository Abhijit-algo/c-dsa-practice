# include<stdio.h>
int main(){
    int n;
    printf("enter no element: ");
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
    int min=0;
    for(int i=0;i<k;i++){
        sum=sum+arr[i];
    }
    min=sum;
int left=0;
int right=k-1;
while(right<n-1){
    left++;
    right++;
    sum=sum-arr[left-1]+arr[right];
    if(min>sum){
        min=sum;
    }
}
printf("minimum sub array sum:%d ",min);
return 0;

}