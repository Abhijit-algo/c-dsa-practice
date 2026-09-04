# include<stdio.h>
int main(){
    int n;
    printf("enter no of element: ");
    scanf("%d",&n);
    int arr[n];
    printf("enter  element : ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int left=0;
    int right=n-1;
    int area=0;
    int max=0;
    int best_width=0;
    int best_height=0;
    while(left<right){
       int width=right-left;
       int height;
        if(arr[right]>arr[left]){
            height=arr[left];
        }
        else{
            height=arr[right];
        }
        area=width*height;
        if(area>max){
            max=area;
            best_height=height;
            best_width=width;
        }
        if(arr[left]<arr[right]){
            left++;
        }
        else{
            right--;
        }

    }
    printf("max store water in a container =%d and their height=%d and width=%d",max,best_height,best_width);
    return 0;
}