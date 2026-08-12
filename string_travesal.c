# include <stdio.h>
int main(){
char str[100];
printf("enter string :");
scanf("%s",str);
puts(str);
int i=0;
while(str[i]!='\0'){
printf("\ncharacter at index %d : %c",i,str[i]);
    i++;
}
    return 0;
}