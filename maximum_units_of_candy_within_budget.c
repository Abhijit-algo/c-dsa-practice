# include <stdio.h>
int main (){
    int n; 
    printf("enter no of element: ");
    scanf("%d",&n);
    int arr[n];
    printf("enter element: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int k;
    printf("enter maximum budget: ");
    scanf("%d",&k);
    int left=0;
    int max_lenght=0;
    int sum=0;
    for(int right=0;right<n;right++){
        sum+=arr[right];
        while(sum>k){
            sum-=arr[left];
            left++;
        }
        int lenght=right-left+1;
        if(max_lenght<lenght){
            max_lenght=lenght;
        }
    }
    printf("you can buy maximum candy on your budget is:%d",max_lenght);



}