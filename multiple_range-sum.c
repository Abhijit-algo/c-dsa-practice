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
      int prefix[n];
     prefix[0]=arr[0];
    for(int i=1;i<n;i++){
        prefix[i]=prefix[i-1]+arr[i];
    } 
    int q;
    printf("enter q: ");
    scanf("%d",&q);
    int left,right;
    for(int i=0;i<q;i++){
        int sum=-0;
        
        printf("enter left: ");
        scanf("%d",&left);
        printf("enter right: ");
        scanf("%d",&right);
         
    if(left < 0 || right >= n || left > right) {
        printf("Invalid range!");
        continue;;
    }
    
    if(left==0){
        sum=prefix[right];
      
    }
    else{
        sum=prefix[right]-prefix[left-1];
   
    }

 printf("sum of %d to %d= %d\n",left,right,sum);
   
}
 return 0;
}