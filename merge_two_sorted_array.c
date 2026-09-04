// merge two sorted array 
# include <stdio.h>
int main (){
    int n1,n2;
    printf("enter no of element of first array: ");
    scanf("%d",&n1);
   int arr1[n1];
    printf("enter element of first array : ");
  
    
    for(int i=0;i<n1;i++){
        scanf("%d",&arr1[i]);
    }
         printf("enter no of element of second array : ");
    scanf("%d",&n2);
    
    int arr2[n2];
    printf("enter element of second array :  ");
    for(int j=0;j<n2;j++){
        scanf("%d",&arr2[j]);
     
    }
     int result[n1+n2];
    int i=0;
    int j=0;
    int k=0;
    while(i<n1 && j<n2){
        if(arr1[i]<arr2[j]){
result[k]=arr1[i];
i++;
        }
else{
    result[k]=arr2[j];
    j++;
}
k++;
    }

while(i<n1){
    result[k]=arr1[i];
    i++;
    k++;
}
while(j<n2){
    result[k]=arr2[j];
    j++;
    k++;
}
printf("merge two sorted array : ");
    for(int m=0;m<n1+n2;m++){
printf("%d\n",result[m]);
    }
    return 0;
}