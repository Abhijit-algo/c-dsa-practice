# include <stdio.h>
# include <stdlib.h>
int main(){
    int n;
    printf("enter no of element : ");
    scanf("%d",&n);
    int arr[n];
    printf("enter array element : ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }

        }
    }
    int target;
    printf("enter target : ");
    scanf("%d",&target);
    int closet=arr[0]+arr[1]+arr[2];
    int found_num,found_left,found_right;
    int flag=0;
    int found=0;
    for(int i=0;i<n-2;i++){
int left=i+1;
int right=n-1;
while(left<right){
    int sum=arr[i]+arr[left]+arr[right];
    if(abs(sum-target)<abs(closet-target)){
        closet=sum;
        flag=1;
        found_num=arr[i];
        found_left=arr[left];
        found_right=arr[right];
        
    }
    if(sum==target){
        found=1;
            found_num=arr[i];
        found_left=arr[left];
        found_right=arr[right];
        break;

    }
    if(sum<target){
        left++;
    }
    else{
        right--;
    }
}
    }
    if(found==1){
        printf("target are acectly match and three num, are %d %d %d",found_num,found_left,found_right);
    }
    else if(flag==1){
        printf("closet terget are found and three num are %d %d %d",found_num,found_left,found_right);
    }
    
    return 0;
}