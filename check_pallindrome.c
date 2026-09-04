//check palindrome using two pointer
# include <stdio.h>
int main(){
    int n;
    int flag=1;
    
    printf("enter no of element : ");
    scanf("%d",&n);
    int arr[n];
    printf("enter array element : ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
   
    int left=0;
    int right=n-1;
    while(left<right){
       
        if(arr[left]!=arr[right]){
            flag=0;
break;
        }
        left++;
        right--;
      

    }
    
    
    if(flag==0){
        printf("no is not pallindrome");
    }
    else{
        printf("no is pallindrome");
    }
   
    return 0;
}
