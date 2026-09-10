# include <stdio.h>
# define max_val 10005
int main(){
    int n;
    printf("enter no of element: ");
    scanf("%d",&n);
    int arr[n];
    printf("enter element: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("frecuincy of the element: ");
    int freq[max_val]={0};
    for(int i=0;i<n;i++){
        freq[arr[i]]++;
    }
    for(int i=0;i<max_val;i++){
        if(freq[i]>0){
            printf("freq[%d]= %d\n",i,freq[i]);
        }
    }
    return 0;
}