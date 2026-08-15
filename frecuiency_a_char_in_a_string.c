# include <stdio.h>
int main(){
    char str[30];
    printf("enter a string : ");
    fgets(str,sizeof(str),stdin);
    int count=0;
    char target;
    printf("enter target : ");
    scanf("%c",&target);
    int i=0;
    while(str[i]!='\0'){
        if(str[i]==target){
            count++;
        }
        i++;
    }
    printf("frecuiency of a element :%d",count);
    return 0;
}