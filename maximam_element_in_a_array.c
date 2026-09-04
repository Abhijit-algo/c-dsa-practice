#include <stdio.h>
int main(){
    int a[5];
    int max=0;
    printf("enter your array element: ");
    for(int i=0;i<5;i++){
    scanf("%d",& a[i]);
}
 max=a[0];
printf("your array element is : ");
 for(int i=0;i<5;i++){
    printf("%d", a[i]);
   // max=a[0];
    if(max<a[i]){
        max=a[i];
    }
}
    printf("maximum element in a array %d",max);
    return 0;
}