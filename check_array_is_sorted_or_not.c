# include <stdio.h>
int main(){
int n;
int flag=1;
printf("enter no of element : ");
scanf("%d",&n);
int arr[n];
printf("printf enter array element : ");
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
for(int i=0;i<n-1;i++){
    if(arr[i]>arr[i+1]){
flag=0;
break;
    }
}
//else if (arr[i]>arr[i+1]){
    //flag=0;
 //}
if(flag==1){
    printf("array is sorted");
}
else{
    printf("array is not sorted");
}

    return 0;
}