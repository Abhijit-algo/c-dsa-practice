# include<stdio.h>
int main (){
int n;
printf ("enter no of element : ");
scanf("%d",&n);
int arr[n];
printf("enter array element : ");
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
int target;
printf("enter target : ");
scanf("%d",&target);
int flag=0;
for(int i=0;i<n-1;i++){
for(int j=0;j<n-i-1;j++){
    if(arr[j]>arr[j+1]){
        int temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
}
}
}
int sum;
int found_index;
int found_left;
int found_right;
for(int i=0;i<n-2;i++){
    int left=i+1;
int right=n-1;
    while(left<right){
        sum=arr[i]+arr[left]+arr[right];
        if(sum==target){
            flag= 1;
             found_index=arr[i];
             found_left=arr[left];
             found_right=arr[right];
            
            break;
        }
    

if(target<sum){
    right--;
}
else{
    left++;
}
}
}
if(flag==1){
   printf("three no are found : %d %d %d ",found_index,found_left,found_right); 
}
else{
printf("target is not found");
}
return 0;
}
