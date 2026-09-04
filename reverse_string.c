//reverse string using two pointer
# include <stdio.h>
# include <string.h>
int main(){
    char temp;
    char str[100];
    printf("enter string : ");
    fgets(str,sizeof(str),stdin);
    int left=0;
    int right=strlen(str)-1;
    if(str[right]=='\n'){
        right--;
    }
    while(right>left){
temp=str[left];
str[left]=str[right];
str[right]=temp;
left++;
right--;
    }
    printf("reverse string is: %s",str);

    return 0;
}