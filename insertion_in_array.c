# include <stdio.h>
int main(){
    int n;
    printf("enter no of element :  ");
    scanf("%d",&n);
  int  arr[100];
   printf("enter  element :  ");
   for(int i=0;i<n;i++){
     scanf("%d",&arr[i]);
   }
   int position;
   printf("enter position : ");
   scanf("%d",&position);
   int insert_value;
   printf("enter insert_value: ");
   scanf("%d",& insert_value);
   for(int i=n;i>=position;i--){
       arr[i]=arr[i-1];


   }
      arr[position-1]=insert_value;
   n++;
   for(int i=0;i<n;i++){
   printf("%d\n",arr[i]);
}
   return 0;
}