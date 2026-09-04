# include <stdio.h>
int main (){
    int n;
    printf("enter no of element : ");
    scanf("%d",&n);
    
int arr1[n];
int arr2[n];
printf("enter array element : ");
for(int i=0;i<n;i++){
    scanf("%d",&arr1[i]);

arr2[i]=arr1[i];
}
printf("copied array : ");
for(int i=0;i<n;i++){
    printf("%d\n",arr2[i]);
}
    return 0;
}