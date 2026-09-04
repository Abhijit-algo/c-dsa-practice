# include <stdio.h>
# include <string.h>
int main(){
   int flag=1;
    char str[100];
    printf("enter string : ");
    fgets(str,sizeof(str),stdin);
    int left=0;
    int right=strlen(str)-1;
    if(str[right]=='\n'){
        right--;
    }
    while(right>left){
if(str[left]!=str[right]){
    flag=0;
    break;
}
left++;
right--;
    }
if(flag==0){
    printf("string is not a pallindrme");
}
else{
    printf("string is pallindrme");
}

    return 0;
}