# include <stdio.h>
int main (){
    int n;
    printf("enter no of element: ");
    scanf("%d",&n);
    int arr[n];
    printf("enter element: ");
    for(int i=0;i<n;i++){
        scanf(" %d",&arr[i]);
    }
    int left,right,sum=0;
    printf("enter left: ");
    scanf("%d",&left);
    printf("enter right: ");
    scanf("%d",&right);
    
    if(left < 0 || right >= n || left > right) {
        printf("Invalid range!");
        return 1;
    }

    int prefix[n];
    prefix[0]=arr[0];
    for(int i=1;i<n;i++){
        prefix[i]=prefix[i-1]+arr[i];
    }
    if(left==0){
        sum=prefix[right];

    }
    else{
        sum=prefix[right]-prefix[left-1];
    }
    printf("sum of %d to %d= %d",left,right,sum);
    return 0;
}