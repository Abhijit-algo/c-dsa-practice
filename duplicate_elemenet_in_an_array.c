# include <stdio.h>
int main (){
    int n;
    printf("enter no of element of array : ");
    scanf("%d",&n);
    int arr[n];
    printf("enter array element : ");
    for(int i=0;i<n;i++){
         scanf("%d",&arr[i]);
    }
    printf("array element is : ");
    for(int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
            printf("duplicate element =%d\n",arr[i]);
       
             }
             }

    }
return 0;
}