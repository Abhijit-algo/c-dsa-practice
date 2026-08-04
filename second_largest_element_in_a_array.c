# include <stdio.h>
int main(){
    int n;
    printf("enter no of element: ");
    scanf("%d",&n);
    int arr[n];
    printf("enter element : ");
    for(int i=0;i<n;i++){
        scanf("%d", & arr[i]);
    }
    printf("array element is : ");
    for(int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
    int largest,second_largest;
    if(arr[0]>arr[1]){
        largest=arr[0];
        second_largest=arr[1];
    }
    else{
        largest=arr[1];
        second_largest=arr[0];
    }
    for(int i=2;i<n;i++){
        if(arr[i]>largest){
               second_largest=largest;
            largest=arr[i];
            

        }
        else{
            if(arr[i]>second_largest){
                second_largest=arr[i];

            }

        }
    }
    printf("largest element=%d\n",largest);
        printf("second_largest element=%d\n",second_largest);

    return 0;
}