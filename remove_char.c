#include <stdio.h>
int main (){
    char str[200];
    char target;
    int new_string=0;
    printf ("enter any string : ");
    fgets(str,sizeof(str),stdin);
    printf ("enter target taht you remove : ");
    scanf("%c",&target);
   
    for(int i=0;str[i]!='\0'&& str[i]!='\n';i++){
        if(str[i]!=target){
         str[new_string]=str[i];
         new_string++;
        }
    }
    printf("new string is %s ",str);
    return 0;
}