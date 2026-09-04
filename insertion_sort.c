# include <stdio.h>
int main(){
    int n;
    printf ("enter no of element : ");
    scanf("%d",&n);
    int arr[n];
    printf("enter element : ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=1;i<n;i++){
        int key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;

    }
    printf("sorted array is : ");
    for(int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}