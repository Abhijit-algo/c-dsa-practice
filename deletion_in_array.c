# include <stdio.h>
int main(){
    int n;
    printf("enter no of element in array: ");
    scanf("%d",&n);
    int arr[100];
    printf("enter array element : ");
    for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }
   int position;
    printf("enter positon : ");
    scanf("%d",&position);
   // int deletion_value;
   // printf("enter no you can delate : ");
   // scanf("%d",&deletion_value);
    for(int i=position-1;i<n;i++){
        arr[i]=arr[i+1];
    }
   // arr[position-1]=deletion_value;
    n--;
for(int i=0;i<n;i++){
    printf("%d\n",arr[i]);
}
return 0;
}