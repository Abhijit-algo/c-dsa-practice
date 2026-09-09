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
    int left=0;
    int zero_count=0;
    int max=0;
    for(int right=0;right<n;right++){
        if(arr[right]==0){
            zero_count++;
        }
        while(zero_count>1){
            if(arr[left]==0){
                zero_count--;

            }
            left++;
        }
        int lenght=right-left+1;
        if(max<lenght){
            max=lenght;
        }

    }
    printf("maximum subarray length with at most one zero: :%d",max);
    return 0;
    
}