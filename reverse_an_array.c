# include <stdio.h>
int main(){
    int n;
     printf("enter your array size : \n");
     scanf("%d",&n);
     int a[n];
    printf("enter your array element : \n");
    for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
}
printf("your array element is : ");
for(int i=0;i<n;i++){
printf("%d \n",a[i]);
}
printf("your revverse array is : ");
for(int i=n-1;i>=0;i--){
printf("%d",a[i]);
}
return 0;
}