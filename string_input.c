# include <stdio.h>
# include <string.h>
int main(){
    char str[100];
    printf("enter your name : ");
    fgets(str,sizeof(str),stdin);
    printf("your name is : ");
    puts(str);
    return 0;
}