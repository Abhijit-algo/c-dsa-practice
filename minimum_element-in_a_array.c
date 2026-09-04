# include<stdio.h>
int main(){ 
    int min=0;
    int a[5];
    printf("enter your array element: ");
    for(int i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    printf("your array element is : ");
    for(int i=0;i<5;i++){ 
        printf("%d",a[i]);
    }
    min=a[0];
    for(int i=1;i<5;i++){
        if(min>a[i]){
            min=a[i];
        }
    }
    printf("min element in a array : %d",min);
    return 0;
}