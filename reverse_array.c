//reverse an array using two pointer
# include <stdio.h>
int main(){
    int n;
    printf("enter no of element : ");
    scanf("%d",&n);
    int arr[n];
    printf("enter array element : ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int temp;
    int left=0;
    int right=n-1;
    while(left<right){
        temp=arr[right];
       arr[right]=arr[left];
        arr[left]=temp;
        left++;
        right--;
    }
     printf("reverse array are : ");
    for(int i=0;i<n;i++){
    printf("%d\n",arr[i]);
    }
    return 0;
}