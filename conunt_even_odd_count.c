# include <stdio.h>
int main(){
    int n;
    int even_count=0;
    int odd_count=0;
    printf("enter no of element in a array : ");
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
        if(arr[i]%2==0){
           even_count++;
        }
        else{
            odd_count++;
        }
    }
    printf("no of even element is : %d\n",even_count);
    printf("no of odd element is : %d",odd_count);
    return 0;
}