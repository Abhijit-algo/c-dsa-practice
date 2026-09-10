# include <stdio.h>
# define max_val 100005
int main(){
    int n;
    printf("enter no of element: ");
    scanf("%d",&n);
    int arr[n];
    printf("enter element: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int freq[max_val]={0};
    for(int i=0;i<n;i++){
        freq[arr[i]]++;
    }
    int flag=0;
    printf("uniqe element is: ");
    for(int i=0;i<max_val;i++){
        if(freq[i]==1){
            flag=1;
            printf("%d\n",i);

        }
    }
    if(flag==0){
        printf("no uniqe element presen in the array");
    }
    return 0;
}