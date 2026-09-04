#include <stdio.h>
int main(){
    int a[5];
    printf("enter your arry element : ");
    for(int i=0;i<=4;i++){
        scanf("%d",&a[i]);
    }
    printf("your array is: ");
    for(int i=0;i<=4;i++){
        printf(" %d",a[i]);
    }
    return 0;
}