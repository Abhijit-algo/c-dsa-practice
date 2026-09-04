# include <stdio.h>
int main(){
    int n1;
    printf("enter no of element of firt array : ");
    scanf("%d",&n1);
    int arr1[n1];
    printf("enter element of first array : ");
    for(int i=0;i<n1;i++){
        scanf("%d",&arr1[i]);
    }
    int n2;
    printf("enter no of second array : ");
    scanf("%d",&n2);
    int arr2[n2];
    printf("enter element of second array: ");
    for(int j=0;j<n2;j++){
        scanf("%d",&arr2[j]);
    }
    int result[n1<n2 ? n1:n2];
    int i=0;
    int j=0;
    int k=0;
    while(i<n1 && j<n2){
        if(arr1[i]==arr2[j]){
            if(k==0 || result[k-1]!=arr1[i]){
                result[k]=arr1[i];
                k++;
            }
        
        i++;
        j++;
        }
       else if(arr1[i]<arr2[j]){
            i++;
        }
        else{
            j++;
        }

    } 
    printf("intersection of two array : ");
    if (k==0){
printf("intersection is not found");
    }
    else{
    for(int m=0;m<k;m++){
        printf("%d\n",result[m]);
    }
}


    return 0;
}