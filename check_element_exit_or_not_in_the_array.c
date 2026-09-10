# include <stdio.h>
# define max_val 100005
int main (){
    int n;
    printf("enter no of element: ");
    scanf("%d",&n);
    int arr[n];
    printf("enter element: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int k;
    printf("enter k: ");
    scanf("%d",&k);
    int freq[max_val]={0};
    for(int i=0;i<n;i++){
        freq[arr[i]]++;
    }
    int flag=0;
    if(freq[k]>0){
        flag=1;
        
    }
    if(flag==1){
        printf("element is found");
    }
    else{
        printf("element is not exit in the array");
    }
    return 0;
}
