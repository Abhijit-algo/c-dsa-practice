# include <stdio.h>
int main () {
int n,target;
int count=0;
printf("enter no off element : ");
scanf("%d",&n);
int arr[n];
printf("enter element : ");
for (int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
printf("array element is : ");
for(int i=0;i<n;i++){
    printf("%d\n",arr[i]);
}
printf("enter target element : ");
scanf("%d",&target);
for(int i=0;i<n;i++){
    if(arr[i]==target){
        count++;
    }
    }
    if(count==0){
        printf("no is not found : ");
    }
    else {

    

printf("frecuency of a element : %d",count);
}

return 0;
}