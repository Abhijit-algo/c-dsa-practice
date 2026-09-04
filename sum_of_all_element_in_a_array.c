#include <stdio.h>
int main(){
    int sum=0;
    int a[5];
    printf("enter your arry element : ");
    for(int i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    printf("your array is: ");
    for(int i=0;i<5;i++){
        printf(" %d",a[i]);
        sum=sum+a[i];
       // printf("sum is equal to %d",sum);
    }
    printf("sum is equal to %d",sum);
   // sum=sum+a[i];
      //  printf("sum is equal to %d",sum);

    return 0;
}