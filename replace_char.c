#include <stdio.h>
int main (){
    char str[200];
    char target;
    char replace;
    printf ("enter any string : ");
    fgets(str,sizeof(str),stdin);
    printf ("enter target taht you replace : ");
    scanf("%c",&target);
    printf("enter replace char : ");
    scanf(" %c",&replace);
    for(int i=0;str[i]!='\0'&& str[i]!='\n';i++){
        if(str[i]==target){
            str[i]=replace;
        }
    }
    printf("replacement string is %s ",str);
    return 0;
}