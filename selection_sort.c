# include <stdio.h>
int main (){
int n;
printf("enter no of element : ");
scanf("%d",&n);

int arr[n];
printf("enter element : ");
for (int i=0;i<n;i++){

scanf("%d",&arr[i]);
}
for(int i =0;i<n;i++){

int min_idx=i;
for(int j=i+1;j<n;j++){
    if(arr[j]<arr[min_idx]){
        min_idx=j;


    }
}
int temp=arr[min_idx];
arr[min_idx]=arr[i];
arr[i]=temp;

}
printf("sorted array: ");
for(int i=0;i<n;i++){
    printf("%d\n",arr[i]);
}
    return 0;
}