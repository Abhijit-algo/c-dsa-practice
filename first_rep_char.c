# include <stdio.h>
int main(){
char str[100];
int flag=0;
int rep_char;
printf("enter string : ");
fgets(str,sizeof(str),stdin);
for(int i=0;str[i]!='\0'&& str[i]!='\n';i++){
    int count=0;
for(int j=0;str[j]!='\0'&& str[j]!='\n';j++){
    if(str[i]==str[j]){
        count++;
    }
}
if(count>1){
   rep_char=str[i];
    flag=1;
    break;
}
}
if(flag==1){
    printf("first repeted char :%c",rep_char);
}
else{
printf("no repeted char in string");
}
    return 0;
}