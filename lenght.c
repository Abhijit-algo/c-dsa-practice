# include <stdio.h>
int main(){
char str[100];
printf("enter your string : ");
scanf ("%s",str);
printf("your string is : %s",str);
int i=0;
int lenght=0;
while(str[i]!='\0'){
    lenght++;
    i++;
}
printf("\nstring lenght is :%d",lenght);

    return 0;
}