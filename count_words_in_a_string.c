#  include <stdio.h>
int main(){
char str[100];
int space_count=0;
int word_count=0;
printf("enter string : ");
fgets(str,sizeof(str),stdin);
for(int i=0;str[i]!='\n'&& str[i]!='\n';i++){
    if(str[i]==' ' && str[i-1]!=' '){
        space_count++;
    }
}
word_count=space_count+1;
printf("no of word in a string : %d",word_count);

    return 0;
}