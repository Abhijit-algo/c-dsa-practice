# include <stdio.h>
int main(){
    char str[100];
    int flag=1;
    printf("enter string : ");
    scanf("%s",str);
    printf("string is :%s ",str);
    int lenght=0;
    int i=0;
    while(str[i]!=0){
        lenght++;
        i++;
    }
    int start=0;
    int end=lenght-1;
    
    while(end>=start){
        
        if(str[start]!=str[end]){
                flag=0;
                break;
            }
            start++;
            end--;
        }

    if(flag==1){
        printf("\nstring is palindrome : %s",str);
    }
    else{
        printf("\nstring is not a palindrome ");
    }
    return 0;
}