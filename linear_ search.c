# include <stdio.h>
int main(){
    int target_element=0,a[5];
    int flag=0;
    printf("enter your array element : \n");
    for(int i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    printf("your array element is : \n");
     for(int i=0;i<5;i++){
        printf ("%d \n",a[i]);
     }
     printf("your target element  is : ");
     scanf("%d",&target_element);
     for(int i=0;i<5;i++){
       if(target_element==a[i]){
        flag=1;
      break;
       }
       
       }
    if(flag==1){
        printf("target element is %d found \n",target_element);
    }
    else{
        printf("target element is %d not found ",target_element);
    }


return 0;
}