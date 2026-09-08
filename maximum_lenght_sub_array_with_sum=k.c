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
    int max_lenght=0;
    int left=0;
    for(int right=0;right<n;right++){
        sum+=arr[right];
    
    while(sum>k){
        sum-=arr[left];
        left++;
    }
    int lenght=right-left+1;
    if(lenght>max_lenght){
        max_lenght=lenght;
    }
}
printf("maximum lenght of a subarray with sum<=%d is: %d\n",k,max_lenght);
return 0;
}