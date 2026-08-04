# include <stdio.h>
int main(){
    int n;
    printf("entre no of element: ");
    scanf("%d",&n);
    int arr[n];
        printf("entre element: ");
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }
        printf("your element are: ");
        for(int i=0;i<n;i++){
          printf("%d\n",arr[i]);
        }
        int second_smallest_element,smallest_element;
        if(arr[0]>arr[1]){
           second_smallest_element=arr[1];
            smallest_element=arr[0];
        }
        else{
          second_smallest_element=arr[0];
            smallest_element=arr[1];
        }
        for(int i=2;i<n;i++){
            if(smallest_element>arr[i]){
              second_smallest_element  =smallest_element;
                smallest_element=arr[i];


            }
            else if(second_smallest_element>arr[i]){
                second_smallest_element=arr[i];
            }
        }

        printf("smallest element: %d\n",smallest_element);
 printf("second_smallest element: %d\n",second_smallest_element);
    return 0;
}