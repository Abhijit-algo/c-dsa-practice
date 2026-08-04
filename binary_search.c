# include <stdio.h>
int main(){
int n;
printf("enter no element : ");
scanf("%d",&n);
int arr[n];
printf("enter array ellement : ");
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
int target;
printf("enter target element :");
scanf("%d",&target);
int low=0;
int high=n-1;
int found=-1;
while(low<=high){
  int mid=(low+high)/2;
  if(arr[mid]==target){
    //printf("target element is found =%d",arr[mid]);
    found=mid;
    break;
  }
  else if(arr[mid]<target){
    low=mid+1;

  }
  else {
    high=mid-1;
  }

}
if(found!=-1){
    printf("target element is  found: %d",found);
}
else{
    printf("target element is not found :%d",target);
}
return 0;
}