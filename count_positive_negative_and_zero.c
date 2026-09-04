# include <stdio.h>
int main(){
    int n;
    int count_positive=0;
    int count_negative=0;
    int count_zero=0;
    printf("enter no of element : ");
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
    if(arr[i]>0){
        count_positive++;
    }
    else if(arr[i]<0){
            count_negative++;
        }
        else{
            count_zero++;
        } 
    }
        printf("no of positive no : %d\n",count_positive);
         printf("no of negative no : %d\n",count_negative);
     printf("no of zero no : %d",count_zero);


    return 0;
}