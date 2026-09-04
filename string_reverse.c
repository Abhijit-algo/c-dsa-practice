# include <stdio.h>
int main(){
    char str[100];
    printf("enter your string : ");
    scanf("%s",str);
    printf("string is : %s",str);
int i=0;
int lenght=0;
while(str[i]!='\0'){
lenght++;
i++;
}
int j=lenght-1;
printf("\nreverse string is: ");
while(j>=0){
    printf("%c",str[j]);
j--;
}


    return 0;
}